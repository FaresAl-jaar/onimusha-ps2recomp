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

// Function: sub_00119380
// Address: 0x119380 - 0x119420
void sub_00119380_0x119380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119380_0x119380");
#endif

    switch (ctx->pc) {
        case 0x1193e8u: goto label_1193e8;
        default: break;
    }

    ctx->pc = 0x119380u;

    // 0x119380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119384: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x119384u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x119388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11938c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119390: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x119394: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119394u;
    {
        const bool branch_taken_0x119394 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x119398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119394u;
        // 0x119398: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119394) {
            ctx->pc = 0x1193ACu;
            goto label_1193ac;
        }
    }
    ctx->pc = 0x11939Cu;
    // 0x11939c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1193a0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1193a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1193a4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1193A4u;
    {
        const bool branch_taken_0x1193a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1193a4) {
            ctx->pc = 0x1193A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1193A4u;
            // 0x1193a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1193B8u;
            goto label_1193b8;
        }
    }
    ctx->pc = 0x1193ACu;
label_1193ac:
    // 0x1193ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1193acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1193b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1193B0u;
    {
        const bool branch_taken_0x1193b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193B0u;
        // 0x1193b4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193b0) {
            ctx->pc = 0x11940Cu;
            goto label_11940c;
        }
    }
    ctx->pc = 0x1193B8u;
label_1193b8:
    // 0x1193b8: 0x24514148  addiu       $s1, $v0, 0x4148
    ctx->pc = 0x1193b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
    // 0x1193bc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1193bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1193c0: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1193C0u;
    {
        const bool branch_taken_0x1193c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1193c0) {
            ctx->pc = 0x1193C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1193C0u;
            // 0x1193c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1193D4u;
            goto label_1193d4;
        }
    }
    ctx->pc = 0x1193C8u;
    // 0x1193c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1193c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1193cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1193CCu;
    {
        const bool branch_taken_0x1193cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193CCu;
        // 0x1193d0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193cc) {
            ctx->pc = 0x11940Cu;
            goto label_11940c;
        }
    }
    ctx->pc = 0x1193D4u;
label_1193d4:
    // 0x1193d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1193d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1193d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1193D8u;
    {
        const bool branch_taken_0x1193d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1193d8) {
            ctx->pc = 0x1193E8u;
            goto label_1193e8;
        }
    }
    ctx->pc = 0x1193E0u;
    // 0x1193e0: 0xc0463c6  jal         func_118F18
    ctx->pc = 0x1193E0u;
    SET_GPR_U32(ctx, 31, 0x1193E8u);
    ctx->pc = 0x1193E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193E0u;
    // 0x1193e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F18u, 0x1193E0u, 0x1193E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193E8u;
label_1193e8:
    // 0x1193e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1193e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1193ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1193ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1193f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1193f4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1193f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1193f8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1193f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1193fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1193fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x119400: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x119400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119404: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x119404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x119408: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x119408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_11940c:
    // 0x11940c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11940cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119410: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119418: 0x3e00008  jr          $ra
    ctx->pc = 0x119418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119418u;
        // 0x11941c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119420u;
}
