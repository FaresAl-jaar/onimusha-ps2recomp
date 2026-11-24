#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262C30
// Address: 0x262c30 - 0x262df0
void sub_00262C30_0x262c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262C30_0x262c30");
#endif

    switch (ctx->pc) {
        case 0x262c88u: goto label_262c88;
        case 0x262d28u: goto label_262d28;
        case 0x262d74u: goto label_262d74;
        default: break;
    }

    ctx->pc = 0x262c30u;

    // 0x262c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262c34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x262c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x262c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262c40: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x262c40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x262c44: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x262c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x262c48: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x262C48u;
    {
        const bool branch_taken_0x262c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C48u;
        // 0x262c4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c48) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262C50u;
    // 0x262c50: 0x92032ad6  lbu         $v1, 0x2AD6($s0)
    ctx->pc = 0x262c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10966)));
    // 0x262c54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x262C54u;
    {
        const bool branch_taken_0x262c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c54) {
            ctx->pc = 0x262C68u;
            goto label_262c68;
        }
    }
    ctx->pc = 0x262C5Cu;
    // 0x262c5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262c60: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x262C60u;
    {
        const bool branch_taken_0x262c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C60u;
        // 0x262c64: 0xa2032ad6  sb          $v1, 0x2AD6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10966), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c60) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262C68u;
label_262c68:
    // 0x262c68: 0x96052abc  lhu         $a1, 0x2ABC($s0)
    ctx->pc = 0x262c68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10940)));
    // 0x262c6c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x262C6Cu;
    {
        const bool branch_taken_0x262c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C6Cu;
        // 0x262c70: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c6c) {
            ctx->pc = 0x262C90u;
            goto label_262c90;
        }
    }
    ctx->pc = 0x262C74u;
    // 0x262c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262c78: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x262c7c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x262c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c80: 0xc0c2b48  jal         func_30AD20
    ctx->pc = 0x262C80u;
    SET_GPR_U32(ctx, 31, 0x262C88u);
    ctx->pc = 0x262C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C80u;
    // 0x262c84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AD20u, 0x262C80u, 0x262C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C88u;
label_262c88:
    // 0x262c88: 0xa6002abc  sh          $zero, 0x2ABC($s0)
    ctx->pc = 0x262c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10940), (uint16_t)GPR_U32(ctx, 0));
    // 0x262c8c: 0x0  nop
    ctx->pc = 0x262c8cu;
    // NOP
label_262c90:
    // 0x262c90: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x262c94: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x262c94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x262c98: 0x2ca10064  sltiu       $at, $a1, 0x64
    ctx->pc = 0x262c98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x262c9c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x262C9Cu;
    {
        const bool branch_taken_0x262c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x262CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C9Cu;
        // 0x262ca0: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c9c) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262CA4u;
    // 0x262ca4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x262ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x262ca8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x262ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x262cac: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x262cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x262cb0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x262cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x262cb4: 0x24840d04  addiu       $a0, $a0, 0xD04
    ctx->pc = 0x262cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3332));
    // 0x262cb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x262cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x262cbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x262cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262cc0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x262cc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x262cc4: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x262CC4u;
    {
        const bool branch_taken_0x262cc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x262cc4) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262CCCu;
    // 0x262ccc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x262cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262cd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x262cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262cd8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x262cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x262cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262ce0: 0x0  nop
    ctx->pc = 0x262ce0u;
    // NOP
    // 0x262ce4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x262ce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x262ce8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x262ce8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262cec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x262CECu;
    {
        const bool branch_taken_0x262cec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262cec) {
            ctx->pc = 0x262D04u;
            goto label_262d04;
        }
    }
    ctx->pc = 0x262CF4u;
    // 0x262cf4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262cf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262cf8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x262cf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x262cfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262CFCu;
    {
        const bool branch_taken_0x262cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CFCu;
        // 0x262d00: 0xa2032ad6  sb          $v1, 0x2AD6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10966), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262cfc) {
            ctx->pc = 0x262D20u;
            goto label_262d20;
        }
    }
    ctx->pc = 0x262D04u;
label_262d04:
    // 0x262d04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262d04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262d08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x262d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x262d0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262d0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262d10: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x262d10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x262d14: 0x0  nop
    ctx->pc = 0x262d14u;
    // NOP
    // 0x262d18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x262d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x262d1c: 0xa2032ad6  sb          $v1, 0x2AD6($s0)
    ctx->pc = 0x262d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10966), (uint8_t)GPR_U32(ctx, 3));
label_262d20:
    // 0x262d20: 0xc0d24b8  jal         func_3492E0
    ctx->pc = 0x262D20u;
    SET_GPR_U32(ctx, 31, 0x262D28u);
    ctx->pc = 0x262D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D20u;
    // 0x262d24: 0x8e0429c0  lw          $a0, 0x29C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3492E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492E0u, 0x262D20u, 0x262D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D28u;
label_262d28:
    // 0x262d28: 0x920629d0  lbu         $a2, 0x29D0($s0)
    ctx->pc = 0x262d28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x262d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262d30: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x262d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x262d34: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x262d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x262d38: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x262d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x262d3c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x262d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x262d40: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x262d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x262d44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x262d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x262d48: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x262d4c: 0x94a4003c  lhu         $a0, 0x3C($a1)
    ctx->pc = 0x262d4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x262d50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x262d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x262d54: 0xa4a4003c  sh          $a0, 0x3C($a1)
    ctx->pc = 0x262d54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x262d58: 0x92040640  lbu         $a0, 0x640($s0)
    ctx->pc = 0x262d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x262d5c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x262D5Cu;
    {
        const bool branch_taken_0x262d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x262d5c) {
            ctx->pc = 0x262D78u;
            goto label_262d78;
        }
    }
    ctx->pc = 0x262D64u;
    // 0x262d64: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x262d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x262d68: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x262d68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262d6c: 0xc0b9da0  jal         func_2E7680
    ctx->pc = 0x262D6Cu;
    SET_GPR_U32(ctx, 31, 0x262D74u);
    ctx->pc = 0x262D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D6Cu;
    // 0x262d70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7680u, 0x262D6Cu, 0x262D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D74u;
label_262d74:
    // 0x262d74: 0x0  nop
    ctx->pc = 0x262d74u;
    // NOP
label_262d78:
    // 0x262d78: 0x92030640  lbu         $v1, 0x640($s0)
    ctx->pc = 0x262d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x262d7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x262d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262d80: 0x10660017  beq         $v1, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x262D80u;
    {
        const bool branch_taken_0x262d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x262D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D80u;
        // 0x262d84: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d80) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262D88u;
    // 0x262d88: 0x8c23cee8  lw          $v1, -0x3118($at)
    ctx->pc = 0x262d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954728)));
    // 0x262d8c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x262d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x262d90: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x262D90u;
    {
        const bool branch_taken_0x262d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262d90) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262D98u;
    // 0x262d98: 0x8e0529c0  lw          $a1, 0x29C0($s0)
    ctx->pc = 0x262d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x262d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262da0: 0x93848844  lbu         $a0, -0x77BC($gp)
    ctx->pc = 0x262da0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936644)));
    // 0x262da4: 0x90a50004  lbu         $a1, 0x4($a1)
    ctx->pc = 0x262da4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x262da8: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x262da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x262dac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x262dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x262db0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x262DB0u;
    {
        const bool branch_taken_0x262db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262db0) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262DB8u;
    // 0x262db8: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x262DB8u;
    {
        const bool branch_taken_0x262db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x262db8) {
            ctx->pc = 0x262DC8u;
            goto label_262dc8;
        }
    }
    ctx->pc = 0x262DC0u;
    // 0x262dc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x262DC0u;
    {
        const bool branch_taken_0x262dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262dc0) {
            ctx->pc = 0x262DD8u;
            goto label_262dd8;
        }
    }
    ctx->pc = 0x262DC8u;
label_262dc8:
    // 0x262dc8: 0x24030b02  addiu       $v1, $zero, 0xB02
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2818));
    // 0x262dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262DCCu;
    {
        const bool branch_taken_0x262dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DCCu;
        // 0x262dd0: 0xa6032abc  sh          $v1, 0x2ABC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10940), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262dcc) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262DD4u;
    // 0x262dd4: 0x0  nop
    ctx->pc = 0x262dd4u;
    // NOP
label_262dd8:
    // 0x262dd8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x262DD8u;
    {
        const bool branch_taken_0x262dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262dd8) {
            ctx->pc = 0x262DE0u;
            goto label_262de0;
        }
    }
    ctx->pc = 0x262DE0u;
label_262de0:
    // 0x262de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262de8: 0x3e00008  jr          $ra
    ctx->pc = 0x262DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DE8u;
        // 0x262dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262DF0u;
}
