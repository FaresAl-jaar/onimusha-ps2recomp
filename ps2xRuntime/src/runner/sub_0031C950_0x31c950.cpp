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

// Function: sub_0031C950
// Address: 0x31c950 - 0x31ca88
void sub_0031C950_0x31c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C950_0x31c950");
#endif

    switch (ctx->pc) {
        case 0x31c9a0u: goto label_31c9a0;
        case 0x31c9d0u: goto label_31c9d0;
        default: break;
    }

    ctx->pc = 0x31c950u;

    // 0x31c950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31c958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31c960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31c960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c964: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x31c964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x31c968: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31C968u;
    {
        const bool branch_taken_0x31c968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C968u;
        // 0x31c96c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c968) {
            ctx->pc = 0x31C9A8u;
            goto label_31c9a8;
        }
    }
    ctx->pc = 0x31C970u;
    // 0x31c970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c974: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31c974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31c978: 0xa222001a  sb          $v0, 0x1A($s1)
    ctx->pc = 0x31c978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x31c97c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31c980: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x31c980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31c984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c988: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x31c988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31c98c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c990: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x31c990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31c994: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x31c994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31c998: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x31C998u;
    SET_GPR_U32(ctx, 31, 0x31C9A0u);
    ctx->pc = 0x31C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C998u;
    // 0x31c99c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x31C998u, 0x31C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9A0u;
label_31c9a0:
    // 0x31c9a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31C9A0u;
    {
        const bool branch_taken_0x31c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c9a0) {
            ctx->pc = 0x31C9D0u;
            goto label_31c9d0;
        }
    }
    ctx->pc = 0x31C9A8u;
label_31c9a8:
    // 0x31c9a8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x31c9a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31c9ac: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x31c9acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31c9b0: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31c9b4: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31c9b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c9bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c9c0: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x31c9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x31c9c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x31c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31c9c8: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x31C9C8u;
    SET_GPR_U32(ctx, 31, 0x31C9D0u);
    ctx->pc = 0x31C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9C8u;
    // 0x31c9cc: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x31C9C8u, 0x31C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9D0u;
label_31c9d0:
    // 0x31c9d0: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x31c9d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x31c9d4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x31c9d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31c9d8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x31c9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x31c9dc: 0xc421f8d4  lwc1        $f1, -0x72C($at)
    ctx->pc = 0x31c9dcu;
    { uint32_t bits = FAST_READ32(0x90F8D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c9e0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x31c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31c9e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c9e8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C9E8u;
    {
        const bool branch_taken_0x31c9e8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x31C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9E8u;
        // 0x31c9ec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9e8) {
            ctx->pc = 0x31C9FCu;
            goto label_31c9fc;
        }
    }
    ctx->pc = 0x31C9F0u;
    // 0x31c9f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31c9f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c9f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C9F4u;
    {
        const bool branch_taken_0x31c9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9F4u;
        // 0x31c9f8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9f4) {
            ctx->pc = 0x31CA18u;
            goto label_31ca18;
        }
    }
    ctx->pc = 0x31C9FCu;
label_31c9fc:
    // 0x31c9fc: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x31c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x31ca00: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x31ca00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x31ca04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31ca04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31ca08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31ca08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ca0c: 0x0  nop
    ctx->pc = 0x31ca0cu;
    // NOP
    // 0x31ca10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31ca10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31ca14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31ca14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31ca18:
    // 0x31ca18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31ca18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ca1c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x31ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x31ca20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ca20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ca24: 0x0  nop
    ctx->pc = 0x31ca24u;
    // NOP
    // 0x31ca28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31ca28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31ca2c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x31ca2cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x31ca30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ca30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31ca34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31ca34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31ca38: 0x0  nop
    ctx->pc = 0x31ca38u;
    // NOP
    // 0x31ca3c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31ca3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31ca40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31ca40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31ca44: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x31ca44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31ca48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CA48u;
    {
        const bool branch_taken_0x31ca48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ca48) {
            ctx->pc = 0x31CA58u;
            goto label_31ca58;
        }
    }
    ctx->pc = 0x31CA50u;
    // 0x31ca50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31CA50u;
    {
        const bool branch_taken_0x31ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA50u;
        // 0x31ca54: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca50) {
            ctx->pc = 0x31CA68u;
            goto label_31ca68;
        }
    }
    ctx->pc = 0x31CA58u;
label_31ca58:
    // 0x31ca58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CA58u;
    {
        const bool branch_taken_0x31ca58 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x31ca58) {
            ctx->pc = 0x31CA68u;
            goto label_31ca68;
        }
    }
    ctx->pc = 0x31CA60u;
    // 0x31ca60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31ca60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca64: 0x0  nop
    ctx->pc = 0x31ca64u;
    // NOP
label_31ca68:
    // 0x31ca68: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x31ca68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x31ca6c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x31ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x31ca70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ca70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ca78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ca78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ca7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ca7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ca80: 0x3e00008  jr          $ra
    ctx->pc = 0x31CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA80u;
        // 0x31ca84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CA88u;
}
