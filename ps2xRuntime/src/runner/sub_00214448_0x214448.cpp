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

// Function: sub_00214448
// Address: 0x214448 - 0x21450c
void sub_00214448_0x214448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214448_0x214448");
#endif

    switch (ctx->pc) {
        case 0x214470u: goto label_214470;
        case 0x214478u: goto label_214478;
        case 0x2144bcu: goto label_2144bc;
        case 0x2144ccu: goto label_2144cc;
        default: break;
    }

    ctx->pc = 0x214448u;

    // 0x214448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21444c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214454: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214458: 0x26122198  addiu       $s2, $s0, 0x2198
    ctx->pc = 0x214458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8600));
    // 0x21445c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214464: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x214464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x214468: 0xc085144  jal         func_214510
    ctx->pc = 0x214468u;
    SET_GPR_U32(ctx, 31, 0x214470u);
    ctx->pc = 0x21446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214468u;
    // 0x21446c: 0xae121f7c  sw          $s2, 0x1F7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8060), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214510u, 0x214468u, 0x214470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214470u;
label_214470:
    // 0x214470: 0xc07f5da  jal         func_1FD768
    ctx->pc = 0x214470u;
    SET_GPR_U32(ctx, 31, 0x214478u);
    ctx->pc = 0x1FD768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD768u, 0x214470u, 0x214478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214478u;
label_214478:
    // 0x214478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x214478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21447c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21447cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214480: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214488: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x214488u;
    {
        const bool branch_taken_0x214488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214488u;
        // 0x21448c: 0x34a50d08  ori         $a1, $a1, 0xD08 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3336);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214488) {
            ctx->pc = 0x2144B0u;
            goto label_2144b0;
        }
    }
    ctx->pc = 0x214490u;
    // 0x214490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214494: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x214494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21449c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21449cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2144a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2144a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2144a4: 0x80848e0  j           func_212380
    ctx->pc = 0x2144A4u;
    ctx->pc = 0x2144A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144A4u;
    // 0x2144a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2144ACu;
    // 0x2144ac: 0x0  nop
    ctx->pc = 0x2144acu;
    // NOP
label_2144b0:
    // 0x2144b0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x2144b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x2144b4: 0xc07f57e  jal         func_1FD5F8
    ctx->pc = 0x2144B4u;
    SET_GPR_U32(ctx, 31, 0x2144BCu);
    ctx->pc = 0x2144B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144B4u;
    // 0x2144b8: 0x24a54598  addiu       $a1, $a1, 0x4598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD5F8u, 0x2144B4u, 0x2144BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144BCu;
label_2144bc:
    // 0x2144bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2144BCu;
    {
        const bool branch_taken_0x2144bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144BCu;
        // 0x2144c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144bc) {
            ctx->pc = 0x2144F0u;
            goto label_2144f0;
        }
    }
    ctx->pc = 0x2144C4u;
    // 0x2144c4: 0xc085180  jal         func_214600
    ctx->pc = 0x2144C4u;
    SET_GPR_U32(ctx, 31, 0x2144CCu);
    ctx->pc = 0x214600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214600u, 0x2144C4u, 0x2144CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144CCu;
label_2144cc:
    // 0x2144cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2144ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2144d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2144d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2144d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2144d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2144d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2144dc: 0x34a50d09  ori         $a1, $a1, 0xD09
    ctx->pc = 0x2144dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3337);
    // 0x2144e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2144e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2144e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2144e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2144e8: 0x80848e0  j           func_212380
    ctx->pc = 0x2144E8u;
    ctx->pc = 0x2144ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144E8u;
    // 0x2144ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2144F0u;
label_2144f0:
    // 0x2144f0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2144f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2144f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2144f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2144f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2144f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2144fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2144fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214500: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214504: 0x3e00008  jr          $ra
    ctx->pc = 0x214504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214504u;
        // 0x214508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21450Cu;
}
