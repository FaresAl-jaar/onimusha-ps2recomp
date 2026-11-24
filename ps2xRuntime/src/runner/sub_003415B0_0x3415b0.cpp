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

// Function: sub_003415B0
// Address: 0x3415b0 - 0x341640
void sub_003415B0_0x3415b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003415B0_0x3415b0");
#endif

    switch (ctx->pc) {
        case 0x341634u: goto label_341634;
        default: break;
    }

    ctx->pc = 0x3415b0u;

    // 0x3415b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3415b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3415b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3415b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3415b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3415b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3415bc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3415bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3415c0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3415c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3415c4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3415c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3415c8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3415c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3415cc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3415ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3415d0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3415d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3415d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3415d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3415d8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3415d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3415dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3415dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3415e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3415e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3415e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3415e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3415e8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3415e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3415ec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3415ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3415f0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3415f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3415f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3415f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3415f8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3415f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3415fc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3415fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x341600: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x341600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x341604: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x341604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x341608: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x341608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34160c: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x34160cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x341610: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x341610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x341614: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x341614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x341618: 0xc2400  sll         $a0, $t4, 16
    ctx->pc = 0x341618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x34161c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x34161cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x341620: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x341620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x341624: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x341624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x341628: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x341628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34162c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34162Cu;
    SET_GPR_U32(ctx, 31, 0x341634u);
    ctx->pc = 0x341630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34162Cu;
    // 0x341630: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34162Cu, 0x341634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341634u;
label_341634:
    // 0x341634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341638: 0x3e00008  jr          $ra
    ctx->pc = 0x341638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341638u;
        // 0x34163c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341640u;
}
