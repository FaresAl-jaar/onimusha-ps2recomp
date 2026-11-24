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

// Function: sub_00119620
// Address: 0x119620 - 0x1196e4
void sub_00119620_0x119620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119620_0x119620");
#endif

    switch (ctx->pc) {
        case 0x119688u: goto label_119688;
        case 0x1196c4u: goto label_1196c4;
        case 0x1196ccu: goto label_1196cc;
        default: break;
    }

    ctx->pc = 0x119620u;

    // 0x119620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119624: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x119624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x119628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11962c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119630: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x119630u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x119634: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119634u;
    {
        const bool branch_taken_0x119634 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x119638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119634u;
        // 0x119638: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119634) {
            ctx->pc = 0x11964Cu;
            goto label_11964c;
        }
    }
    ctx->pc = 0x11963Cu;
    // 0x11963c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119640: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x119640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x119644: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119644u;
    {
        const bool branch_taken_0x119644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x119644) {
            ctx->pc = 0x119648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119644u;
            // 0x119648: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119658u;
            goto label_119658;
        }
    }
    ctx->pc = 0x11964Cu;
label_11964c:
    // 0x11964c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119650: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x119650u;
    {
        const bool branch_taken_0x119650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119650u;
        // 0x119654: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119650) {
            ctx->pc = 0x1196D0u;
            goto label_1196d0;
        }
    }
    ctx->pc = 0x119658u;
label_119658:
    // 0x119658: 0x24424148  addiu       $v0, $v0, 0x4148
    ctx->pc = 0x119658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
    // 0x11965c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x11965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x119660: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119660u;
    {
        const bool branch_taken_0x119660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x119660) {
            ctx->pc = 0x119664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119660u;
            // 0x119664: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119674u;
            goto label_119674;
        }
    }
    ctx->pc = 0x119668u;
    // 0x119668: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11966c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11966Cu;
    {
        const bool branch_taken_0x11966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11966Cu;
        // 0x119670: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11966c) {
            ctx->pc = 0x1196D0u;
            goto label_1196d0;
        }
    }
    ctx->pc = 0x119674u;
label_119674:
    // 0x119674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x119678: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x119678u;
    {
        const bool branch_taken_0x119678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119678u;
        // 0x11967c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119678) {
            ctx->pc = 0x1196D0u;
            goto label_1196d0;
        }
    }
    ctx->pc = 0x119680u;
    // 0x119680: 0xc04647e  jal         func_1191F8
    ctx->pc = 0x119680u;
    SET_GPR_U32(ctx, 31, 0x119688u);
    ctx->pc = 0x1191F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191F8u, 0x119680u, 0x119688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119688u;
label_119688:
    // 0x119688: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x119688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11968c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11968cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119690: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x119690u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119694: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x119694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x119698: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x119698u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11969c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x11969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1196a0: 0x224202f  dsubu       $a0, $s1, $a0
    ctx->pc = 0x1196a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) - GPR_U64(ctx, 4));
    // 0x1196a4: 0x30a60002  andi        $a2, $a1, 0x2
    ctx->pc = 0x1196a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1196a8: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1196a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1196ac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1196acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1196b0: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1196b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1196b4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1196B4u;
    {
        const bool branch_taken_0x1196b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196B4u;
        // 0x1196b8: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196b4) {
            ctx->pc = 0x1196CCu;
            goto label_1196cc;
        }
    }
    ctx->pc = 0x1196BCu;
    // 0x1196bc: 0xc0463c6  jal         func_118F18
    ctx->pc = 0x1196BCu;
    SET_GPR_U32(ctx, 31, 0x1196C4u);
    ctx->pc = 0x1196C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1196BCu;
    // 0x1196c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F18u, 0x1196BCu, 0x1196C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1196C4u;
label_1196c4:
    // 0x1196c4: 0xc046340  jal         func_118D00
    ctx->pc = 0x1196C4u;
    SET_GPR_U32(ctx, 31, 0x1196CCu);
    ctx->pc = 0x1196C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1196C4u;
    // 0x1196c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D00u, 0x1196C4u, 0x1196CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1196CCu;
label_1196cc:
    // 0x1196cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1196ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1196d0:
    // 0x1196d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1196d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1196d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1196d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1196d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1196d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1196dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1196DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196DCu;
        // 0x1196e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196E4u;
}
