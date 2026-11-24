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

// Function: sub_0025B500
// Address: 0x25b500 - 0x25b5c4
void sub_0025B500_0x25b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B500_0x25b500");
#endif

    switch (ctx->pc) {
        case 0x25b520u: goto label_25b520;
        case 0x25b530u: goto label_25b530;
        case 0x25b54cu: goto label_25b54c;
        case 0x25b59cu: goto label_25b59c;
        default: break;
    }

    ctx->pc = 0x25b500u;

    // 0x25b500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25b504: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25b504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b50c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x25b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x25b510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b514: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x25b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x25b518: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x25B518u;
    SET_GPR_U32(ctx, 31, 0x25B520u);
    ctx->pc = 0x25B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B518u;
    // 0x25b51c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x25B518u, 0x25B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B520u;
label_25b520:
    // 0x25b520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b528: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25B528u;
    SET_GPR_U32(ctx, 31, 0x25B530u);
    ctx->pc = 0x25B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B528u;
    // 0x25b52c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25B528u, 0x25B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B530u;
label_25b530:
    // 0x25b530: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25b530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25b534: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25b538: 0x78225c80  lq          $v0, 0x5C80($at)
    ctx->pc = 0x25b538u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C80u));
    // 0x25b53c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b540: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x25b540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x25b544: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25B544u;
    SET_GPR_U32(ctx, 31, 0x25B54Cu);
    ctx->pc = 0x25B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B544u;
    // 0x25b548: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25B544u, 0x25B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B54Cu;
label_25b54c:
    // 0x25b54c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x25b54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x25b550: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x25b550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25b554: 0x78286c60  lq          $t0, 0x6C60($at)
    ctx->pc = 0x25b554u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x696C60u));
    // 0x25b558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b55c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x25b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25b560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b564: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x25b564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x25b568: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x25b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x25b56c: 0x78276c70  lq          $a3, 0x6C70($at)
    ctx->pc = 0x25b56cu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x696C70u));
    // 0x25b570: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x25b570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x25b574: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x25b574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x25b578: 0x78236c80  lq          $v1, 0x6C80($at)
    ctx->pc = 0x25b578u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x696C80u));
    // 0x25b57c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x25b57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x25b580: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x25b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x25b584: 0x78226c90  lq          $v0, 0x6C90($at)
    ctx->pc = 0x25b584u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696C90u));
    // 0x25b588: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x25b588u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x25b58c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25b58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25b590: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x25b590u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x25b594: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x25B594u;
    SET_GPR_U32(ctx, 31, 0x25B59Cu);
    ctx->pc = 0x25B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B594u;
    // 0x25b598: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x25B594u, 0x25B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B59Cu;
label_25b59c:
    // 0x25b59c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x25b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x25b5a0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25b5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25b5a4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x25b5a8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x25b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x25b5ac: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x25b5acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C10u));
    // 0x25b5b0: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x25b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x25b5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5BCu;
        // 0x25b5c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B5C4u;
}
