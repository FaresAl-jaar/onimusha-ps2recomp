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

// Function: sub_00243988
// Address: 0x243988 - 0x243a20
void sub_00243988_0x243988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243988_0x243988");
#endif

    switch (ctx->pc) {
        case 0x2439b4u: goto label_2439b4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439dcu: goto label_2439dc;
        default: break;
    }

    ctx->pc = 0x243988u;

    // 0x243988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24398c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24398cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x243994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x243998: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x243998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24399c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2439a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2439a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2439a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2439a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2439a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2439a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2439ac: 0xc049f18  jal         func_127C60
    ctx->pc = 0x2439ACu;
    SET_GPR_U32(ctx, 31, 0x2439B4u);
    ctx->pc = 0x2439B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439ACu;
    // 0x2439b0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x2439ACu, 0x2439B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439B4u;
label_2439b4:
    // 0x2439b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2439b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439b8: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2439b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2439bc: 0x24525f44  addiu       $s2, $v0, 0x5F44
    ctx->pc = 0x2439bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24388));
    // 0x2439c0: 0x2655fffc  addiu       $s5, $s2, -0x4
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x2439c4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2439c8:
    // 0x2439c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2439c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2439cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2439ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439d0: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x2439d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2439d4: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x2439D4u;
    SET_GPR_U32(ctx, 31, 0x2439DCu);
    ctx->pc = 0x2439D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439D4u;
    // 0x2439d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x2439D4u, 0x2439DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439DCu;
label_2439dc:
    // 0x2439dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2439DCu;
    {
        const bool branch_taken_0x2439dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2439E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439DCu;
        // 0x2439e0: 0x2e230020  sltiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439dc) {
            ctx->pc = 0x2439F0u;
            goto label_2439f0;
        }
    }
    ctx->pc = 0x2439E4u;
    // 0x2439e4: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x2439e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2439e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2439E8u;
    {
        const bool branch_taken_0x2439e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2439ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439E8u;
        // 0x2439ec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439e8) {
            ctx->pc = 0x2439FCu;
            goto label_2439fc;
        }
    }
    ctx->pc = 0x2439F0u;
label_2439f0:
    // 0x2439f0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2439F0u;
    {
        const bool branch_taken_0x2439f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2439F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439F0u;
        // 0x2439f4: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439f0) {
            ctx->pc = 0x2439C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2439c8;
        }
    }
    ctx->pc = 0x2439F8u;
    // 0x2439f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2439f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2439fc:
    // 0x2439fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2439fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243a00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243a04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243a04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243a08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x243a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243a10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x243a10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243a14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x243a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243a18: 0x3e00008  jr          $ra
    ctx->pc = 0x243A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A18u;
        // 0x243a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243A20u;
}
