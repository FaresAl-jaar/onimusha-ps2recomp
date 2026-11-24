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

// Function: sub_00270910
// Address: 0x270910 - 0x270970
void sub_00270910_0x270910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270910_0x270910");
#endif

    switch (ctx->pc) {
        case 0x270940u: goto label_270940;
        case 0x270958u: goto label_270958;
        default: break;
    }

    ctx->pc = 0x270910u;

    // 0x270910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x270914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x270918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27091c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270924: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x270924u;
    {
        const bool branch_taken_0x270924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270924u;
        // 0x270928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270924) {
            ctx->pc = 0x270958u;
            goto label_270958;
        }
    }
    ctx->pc = 0x27092Cu;
    // 0x27092c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x27092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x270930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270934: 0x244274e0  addiu       $v0, $v0, 0x74E0
    ctx->pc = 0x270934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29920));
    // 0x270938: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x270938u;
    SET_GPR_U32(ctx, 31, 0x270940u);
    ctx->pc = 0x27093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270938u;
    // 0x27093c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x270938u, 0x270940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270940u;
label_270940:
    // 0x270940: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x270940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x270944: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x270944u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x270948: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270948u;
    {
        const bool branch_taken_0x270948 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x27094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270948u;
        // 0x27094c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270948) {
            ctx->pc = 0x270958u;
            goto label_270958;
        }
    }
    ctx->pc = 0x270950u;
    // 0x270950: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x270950u;
    SET_GPR_U32(ctx, 31, 0x270958u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x270950u, 0x270958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270958u;
label_270958:
    // 0x270958: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x270958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27095c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270968: 0x3e00008  jr          $ra
    ctx->pc = 0x270968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270968u;
        // 0x27096c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270970u;
}
