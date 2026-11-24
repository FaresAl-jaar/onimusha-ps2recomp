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

// Function: sub_002010B0
// Address: 0x2010b0 - 0x201174
void sub_002010B0_0x2010b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002010B0_0x2010b0");
#endif

    switch (ctx->pc) {
        case 0x2010f8u: goto label_2010f8;
        case 0x201110u: goto label_201110;
        case 0x201158u: goto label_201158;
        default: break;
    }

    ctx->pc = 0x2010b0u;

    // 0x2010b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2010b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2010b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2010b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2010b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2010b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2010bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2010bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2010c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2010c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2010c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2010c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2010cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2010ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2010d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2010d4: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2010D4u;
    {
        const bool branch_taken_0x2010d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2010D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010D4u;
        // 0x2010d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010d4) {
            ctx->pc = 0x2010E8u;
            goto label_2010e8;
        }
    }
    ctx->pc = 0x2010DCu;
    // 0x2010dc: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2010DCu;
    {
        const bool branch_taken_0x2010dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2010E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010DCu;
        // 0x2010e0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010dc) {
            ctx->pc = 0x2010E8u;
            goto label_2010e8;
        }
    }
    ctx->pc = 0x2010E4u;
    // 0x2010e4: 0x245010a8  addiu       $s0, $v0, 0x10A8
    ctx->pc = 0x2010e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4264));
label_2010e8:
    // 0x2010e8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2010E8u;
    {
        const bool branch_taken_0x2010e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2010e8) {
            ctx->pc = 0x201108u;
            goto label_201108;
        }
    }
    ctx->pc = 0x2010F0u;
    // 0x2010f0: 0xc08045e  jal         func_201178
    ctx->pc = 0x2010F0u;
    SET_GPR_U32(ctx, 31, 0x2010F8u);
    ctx->pc = 0x2010F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010F0u;
    // 0x2010f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201178u, 0x2010F0u, 0x2010F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010F8u;
label_2010f8:
    // 0x2010f8: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x2010fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2010FCu;
    {
        const bool branch_taken_0x2010fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010FCu;
        // 0x201100: 0x24433f40  addiu       $v1, $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010fc) {
            ctx->pc = 0x20113Cu;
            goto label_20113c;
        }
    }
    ctx->pc = 0x201104u;
    // 0x201104: 0x0  nop
    ctx->pc = 0x201104u;
    // NOP
label_201108:
    // 0x201108: 0xc080496  jal         func_201258
    ctx->pc = 0x201108u;
    SET_GPR_U32(ctx, 31, 0x201110u);
    ctx->pc = 0x20110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201108u;
    // 0x20110c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x201108u, 0x201110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201110u;
label_201110:
    // 0x201110: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x201110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x201114: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201114u;
    {
        const bool branch_taken_0x201114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201114u;
        // 0x201118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201114) {
            ctx->pc = 0x201138u;
            goto label_201138;
        }
    }
    ctx->pc = 0x20111Cu;
    // 0x20111c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20111cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201120: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x201120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x201124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20112c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201130: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x201130u;
    ctx->pc = 0x201134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201130u;
    // 0x201134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x201138u;
label_201138:
    // 0x201138: 0x26230190  addiu       $v1, $s1, 0x190
    ctx->pc = 0x201138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_20113c:
    // 0x20113c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x201140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20114c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x20114cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x201150: 0xc0804c4  jal         func_201310
    ctx->pc = 0x201150u;
    SET_GPR_U32(ctx, 31, 0x201158u);
    ctx->pc = 0x201154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201150u;
    // 0x201154: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201310u, 0x201150u, 0x201158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201158u;
label_201158:
    // 0x201158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20115c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20115cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x201168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20116c: 0x3e00008  jr          $ra
    ctx->pc = 0x20116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20116Cu;
        // 0x201170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20116Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201174u;
}
