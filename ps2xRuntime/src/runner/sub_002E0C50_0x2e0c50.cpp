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

// Function: sub_002E0C50
// Address: 0x2e0c50 - 0x2e0dcc
void sub_002E0C50_0x2e0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0C50_0x2e0c50");
#endif

    switch (ctx->pc) {
        case 0x2e0cb0u: goto label_2e0cb0;
        case 0x2e0cc4u: goto label_2e0cc4;
        case 0x2e0cecu: goto label_2e0cec;
        case 0x2e0d0cu: goto label_2e0d0c;
        case 0x2e0d38u: goto label_2e0d38;
        default: break;
    }

    ctx->pc = 0x2e0c50u;

    // 0x2e0c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c64: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x2e0c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2e0c68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0C68u;
    {
        const bool branch_taken_0x2e0c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C68u;
        // 0x2e0c6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c68) {
            ctx->pc = 0x2E0C80u;
            goto label_2e0c80;
        }
    }
    ctx->pc = 0x2E0C70u;
    // 0x2e0c70: 0x82230039  lb          $v1, 0x39($s1)
    ctx->pc = 0x2e0c70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x2e0c74: 0x12030050  beq         $s0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x2E0C74u;
    {
        const bool branch_taken_0x2e0c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e0c74) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0C7Cu;
    // 0x2e0c7c: 0x0  nop
    ctx->pc = 0x2e0c7cu;
    // NOP
label_2e0c80:
    // 0x2e0c80: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2e0c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e0c84: 0x90620100  lbu         $v0, 0x100($v1)
    ctx->pc = 0x2e0c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2e0c88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0c8c: 0xa0620100  sb          $v0, 0x100($v1)
    ctx->pc = 0x2e0c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0c90: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x2e0c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x2e0c94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0c98: 0xa222003a  sb          $v0, 0x3A($s1)
    ctx->pc = 0x2e0c98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0c9c: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2e0c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2e0ca0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0CA0u;
    {
        const bool branch_taken_0x2e0ca0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CA0u;
        // 0x2e0ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ca0) {
            ctx->pc = 0x2E0CB8u;
            goto label_2e0cb8;
        }
    }
    ctx->pc = 0x2E0CA8u;
    // 0x2e0ca8: 0xc0b8374  jal         func_2E0DD0
    ctx->pc = 0x2E0CA8u;
    SET_GPR_U32(ctx, 31, 0x2E0CB0u);
    ctx->pc = 0x2E0CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CA8u;
    // 0x2e0cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DD0u, 0x2E0CA8u, 0x2E0CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CB0u;
label_2e0cb0:
    // 0x2e0cb0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E0CB0u;
    {
        const bool branch_taken_0x2e0cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cb0) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0CB8u;
label_2e0cb8:
    // 0x2e0cb8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2e0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2e0cbc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E0CBCu;
    SET_GPR_U32(ctx, 31, 0x2E0CC4u);
    ctx->pc = 0x2E0CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CBCu;
    // 0x2e0cc0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E0CBCu, 0x2E0CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CC4u;
label_2e0cc4:
    // 0x2e0cc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0CC4u;
    {
        const bool branch_taken_0x2e0cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cc4) {
            ctx->pc = 0x2E0CE0u;
            goto label_2e0ce0;
        }
    }
    ctx->pc = 0x2E0CCCu;
    // 0x2e0ccc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E0CCCu;
    {
        const bool branch_taken_0x2e0ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ccc) {
            ctx->pc = 0x2E0CF8u;
            goto label_2e0cf8;
        }
    }
    ctx->pc = 0x2E0CD4u;
    // 0x2e0cd4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e0cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2e0cd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0CD8u;
    {
        const bool branch_taken_0x2e0cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cd8) {
            ctx->pc = 0x2E0CF8u;
            goto label_2e0cf8;
        }
    }
    ctx->pc = 0x2E0CE0u;
label_2e0ce0:
    // 0x2e0ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ce4: 0xc0b8374  jal         func_2E0DD0
    ctx->pc = 0x2E0CE4u;
    SET_GPR_U32(ctx, 31, 0x2E0CECu);
    ctx->pc = 0x2E0CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CE4u;
    // 0x2e0ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DD0u, 0x2E0CE4u, 0x2E0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CECu;
label_2e0cec:
    // 0x2e0cec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2E0CECu;
    {
        const bool branch_taken_0x2e0cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cec) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0CF4u;
    // 0x2e0cf4: 0x0  nop
    ctx->pc = 0x2e0cf4u;
    // NOP
label_2e0cf8:
    // 0x2e0cf8: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2e0cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2e0cfc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0CFCu;
    {
        const bool branch_taken_0x2e0cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CFCu;
        // 0x2e0d00: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0cfc) {
            ctx->pc = 0x2E0D30u;
            goto label_2e0d30;
        }
    }
    ctx->pc = 0x2E0D04u;
    // 0x2e0d04: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E0D04u;
    SET_GPR_U32(ctx, 31, 0x2E0D0Cu);
    ctx->pc = 0x2E0D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D04u;
    // 0x2e0d08: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E0D04u, 0x2E0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D0Cu;
label_2e0d0c:
    // 0x2e0d0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0D0Cu;
    {
        const bool branch_taken_0x2e0d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d0c) {
            ctx->pc = 0x2E0D30u;
            goto label_2e0d30;
        }
    }
    ctx->pc = 0x2E0D14u;
    // 0x2e0d14: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e0d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2e0d18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D18u;
    {
        const bool branch_taken_0x2e0d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d18) {
            ctx->pc = 0x2E0D30u;
            goto label_2e0d30;
        }
    }
    ctx->pc = 0x2E0D20u;
    // 0x2e0d20: 0xdc430518  ld          $v1, 0x518($v0)
    ctx->pc = 0x2e0d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1304)));
    // 0x2e0d24: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e0d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e0d28: 0xfc430518  sd          $v1, 0x518($v0)
    ctx->pc = 0x2e0d28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 1304), GPR_U64(ctx, 3));
    // 0x2e0d2c: 0x0  nop
    ctx->pc = 0x2e0d2cu;
    // NOP
label_2e0d30:
    // 0x2e0d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d38:
    // 0x2e0d38: 0x90830140  lbu         $v1, 0x140($a0)
    ctx->pc = 0x2e0d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x2e0d3c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0D3Cu;
    {
        const bool branch_taken_0x2e0d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d3c) {
            ctx->pc = 0x2E0DA8u;
            goto label_2e0da8;
        }
    }
    ctx->pc = 0x2E0D44u;
    // 0x2e0d44: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2e0d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0d48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0d4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e0d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e0d50: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2e0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2e0d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e0d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0d58: 0x0  nop
    ctx->pc = 0x2e0d58u;
    // NOP
    // 0x2e0d5c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e0d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e0d60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e0d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0d64: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D64u;
    {
        const bool branch_taken_0x2e0d64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D64u;
        // 0x2e0d68: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d64) {
            ctx->pc = 0x2E0D7Cu;
            goto label_2e0d7c;
        }
    }
    ctx->pc = 0x2E0D6Cu;
    // 0x2e0d6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e0d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e0d70: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e0d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e0d74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0D74u;
    {
        const bool branch_taken_0x2e0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D74u;
        // 0x2e0d78: 0xb11821  addu        $v1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d74) {
            ctx->pc = 0x2E0D98u;
            goto label_2e0d98;
        }
    }
    ctx->pc = 0x2E0D7Cu;
label_2e0d7c:
    // 0x2e0d7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e0d7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e0d80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e0d84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e0d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e0d88: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e0d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e0d8c: 0x0  nop
    ctx->pc = 0x2e0d8cu;
    // NOP
    // 0x2e0d90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e0d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e0d94: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x2e0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2e0d98:
    // 0x2e0d98: 0xa0640140  sb          $a0, 0x140($v1)
    ctx->pc = 0x2e0d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0d9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0D9Cu;
    {
        const bool branch_taken_0x2e0d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D9Cu;
        // 0x2e0da0: 0xa0700141  sb          $s0, 0x141($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 321), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d9c) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0DA4u;
    // 0x2e0da4: 0x0  nop
    ctx->pc = 0x2e0da4u;
    // NOP
label_2e0da8:
    // 0x2e0da8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e0da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e0dac: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x2e0dacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e0db0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E0DB0u;
    {
        const bool branch_taken_0x2e0db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DB0u;
        // 0x2e0db4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0db0) {
            ctx->pc = 0x2E0D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0d38;
        }
    }
    ctx->pc = 0x2E0DB8u;
label_2e0db8:
    // 0x2e0db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DC4u;
        // 0x2e0dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0DCCu;
}
