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

// Function: sub_002912D0
// Address: 0x2912d0 - 0x291348
void sub_002912D0_0x2912d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002912D0_0x2912d0");
#endif

    switch (ctx->pc) {
        case 0x291310u: goto label_291310;
        default: break;
    }

    ctx->pc = 0x2912d0u;

    // 0x2912d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2912d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2912d4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2912d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2912d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2912d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2912dc: 0x24424940  addiu       $v0, $v0, 0x4940
    ctx->pc = 0x2912dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18752));
    // 0x2912e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2912e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2912e4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2912e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2912e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2912e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4940u));
    // 0x2912ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2912ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912f0: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2912f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2912f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2912f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2912f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2912fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291300: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x291300u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x291304: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x291304u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x291308: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x291308u;
    SET_GPR_U32(ctx, 31, 0x291310u);
    ctx->pc = 0x29130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291308u;
    // 0x29130c: 0xe7ad0028  swc1        $f13, 0x28($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x291308u, 0x291310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291310u;
label_291310:
    // 0x291310: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x291310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x291314: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x291314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x291318: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x291318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29131c: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x29131cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x291320: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x291320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x291324: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x291324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x291328: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x291328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x29132c: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x29132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x291330: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x291330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x291334: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x291334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x291338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29133c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29133cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291340: 0x3e00008  jr          $ra
    ctx->pc = 0x291340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291340u;
        // 0x291344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291348u;
}
