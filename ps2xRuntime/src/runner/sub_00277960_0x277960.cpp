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

// Function: sub_00277960
// Address: 0x277960 - 0x2779ec
void sub_00277960_0x277960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277960_0x277960");
#endif

    switch (ctx->pc) {
        case 0x277994u: goto label_277994;
        case 0x2779b0u: goto label_2779b0;
        case 0x2779d0u: goto label_2779d0;
        default: break;
    }

    ctx->pc = 0x277960u;

    // 0x277960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x277960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x277964: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x277964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
    // 0x277968: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x277968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27796c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27796cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277970: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277978: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x277978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27797c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277980: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x277980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277988: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x277988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27798c: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x27798Cu;
    SET_GPR_U32(ctx, 31, 0x277994u);
    ctx->pc = 0x277990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27798Cu;
    // 0x277990: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x27798Cu, 0x277994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277994u;
label_277994:
    // 0x277994: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x277994u;
    {
        const bool branch_taken_0x277994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277994u;
        // 0x277998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277994) {
            ctx->pc = 0x2779B8u;
            goto label_2779b8;
        }
    }
    ctx->pc = 0x27799Cu;
    // 0x27799c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27799cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2779a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779a4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2779a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779a8: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x2779A8u;
    SET_GPR_U32(ctx, 31, 0x2779B0u);
    ctx->pc = 0x2779ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779A8u;
    // 0x2779ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x2779A8u, 0x2779B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779B0u;
label_2779b0:
    // 0x2779b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2779B0u;
    {
        const bool branch_taken_0x2779b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2779b0) {
            ctx->pc = 0x2779D0u;
            goto label_2779d0;
        }
    }
    ctx->pc = 0x2779B8u;
label_2779b8:
    // 0x2779b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2779b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2779bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2779c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779c4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2779c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779c8: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x2779C8u;
    SET_GPR_U32(ctx, 31, 0x2779D0u);
    ctx->pc = 0x2779CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779C8u;
    // 0x2779cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x2779C8u, 0x2779D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779D0u;
label_2779d0:
    // 0x2779d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2779d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2779d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2779d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2779d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2779d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2779dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2779dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2779e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2779e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2779e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2779E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2779E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779E4u;
        // 0x2779e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2779E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2779ECu;
}
