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

// Function: sub_00167950
// Address: 0x167950 - 0x1679b4
void sub_00167950_0x167950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167950_0x167950");
#endif

    ctx->pc = 0x167950u;

    // 0x167950: 0x3c03101e  lui         $v1, 0x101E
    ctx->pc = 0x167950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4126 << 16));
    // 0x167954: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x167954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x167958: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x167958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x16795c: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x16795cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x167960: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x167960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x167964: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x167964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x167968: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x167968u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x16796c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x16796cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x167970: 0x346417fd  ori         $a0, $v1, 0x17FD
    ctx->pc = 0x167970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6141);
    // 0x167974: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x167974u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x167978: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x167978u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x16797c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x16797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x167980: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x167980u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x167984: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x167984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x167988: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x167988u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x16798c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x16798cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x167990: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x167990u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x167994: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x167994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x167998: 0xfca00030  sd          $zero, 0x30($a1)
    ctx->pc = 0x167998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
    // 0x16799c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x16799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1679a0: 0xfca60038  sd          $a2, 0x38($a1)
    ctx->pc = 0x1679a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 6));
    // 0x1679a4: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1679a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1679a8: 0xfca40040  sd          $a0, 0x40($a1)
    ctx->pc = 0x1679a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 4));
    // 0x1679ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1679ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679ACu;
        // 0x1679b0: 0xfca30048  sd          $v1, 0x48($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1679B4u;
}
