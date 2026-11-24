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

// Function: sub_001084C8
// Address: 0x1084c8 - 0x1085b0
void sub_001084C8_0x1084c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001084C8_0x1084c8");
#endif

    switch (ctx->pc) {
        case 0x1084e4u: goto label_1084e4;
        case 0x10851cu: goto label_10851c;
        case 0x10857cu: goto label_10857c;
        case 0x10858cu: goto label_10858c;
        default: break;
    }

    ctx->pc = 0x1084c8u;

    // 0x1084c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1084c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1084cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1084ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1084d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1084d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1084d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1084d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1084d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1084dc: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x1084DCu;
    SET_GPR_U32(ctx, 31, 0x1084E4u);
    ctx->pc = 0x1084E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084DCu;
    // 0x1084e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x1084DCu, 0x1084E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084E4u;
label_1084e4:
    // 0x1084e4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x1084e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1084E8u;
    {
        const bool branch_taken_0x1084e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1084ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084E8u;
        // 0x1084ec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084e8) {
            ctx->pc = 0x108500u;
            goto label_108500;
        }
    }
    ctx->pc = 0x1084F0u;
    // 0x1084f0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x1084f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x1084f4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1084f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1084f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1084F8u;
    {
        const bool branch_taken_0x1084f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084F8u;
        // 0x1084fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084f8) {
            ctx->pc = 0x108528u;
            goto label_108528;
        }
    }
    ctx->pc = 0x108500u;
label_108500:
    // 0x108500: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x108504: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10850c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10850cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x108510: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x108510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x108514: 0xc0420d2  jal         func_108348
    ctx->pc = 0x108514u;
    SET_GPR_U32(ctx, 31, 0x10851Cu);
    ctx->pc = 0x108518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108514u;
    // 0x108518: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x108514u, 0x10851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10851Cu;
label_10851c:
    // 0x10851c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10851cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108520: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x108520u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x108524: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x108524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_108528:
    // 0x108528: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x108528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10852c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x10852cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x108530: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108534: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x108534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x108538: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x108538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x10853c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x10853cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x108540: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x108540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x108544: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x108548: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x108548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10854c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10854cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x108550: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x108550u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x108554: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x108554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x108558: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x108558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10855c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10855Cu;
    {
        const bool branch_taken_0x10855c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x108560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10855Cu;
        // 0x108560: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10855c) {
            ctx->pc = 0x108578u;
            goto label_108578;
        }
    }
    ctx->pc = 0x108564u;
    // 0x108564: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x108564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x108568: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108568u;
    {
        const bool branch_taken_0x108568 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x108568) {
            ctx->pc = 0x10856Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108568u;
            // 0x10856c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108584u;
            goto label_108584;
        }
    }
    ctx->pc = 0x108570u;
    // 0x108570: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108570u;
    {
        const bool branch_taken_0x108570 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x108574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108570u;
        // 0x108574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108570) {
            ctx->pc = 0x108580u;
            goto label_108580;
        }
    }
    ctx->pc = 0x108578u;
label_108578:
    // 0x108578: 0x10000002  b           . + 4 + (0x2 << 2)
label_10857c:
    if (ctx->pc == 0x10857Cu) {
        ctx->pc = 0x10857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108578u;
        // 0x10857c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108580u;
        goto label_108580;
    }
    ctx->pc = 0x108578u;
    {
        const bool branch_taken_0x108578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108578u;
        // 0x10857c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108578) {
            ctx->pc = 0x108584u;
            goto label_108584;
        }
    }
    ctx->pc = 0x108580u;
label_108580:
    // 0x108580: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x108580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_108584:
    // 0x108584: 0xc0420d2  jal         func_108348
    ctx->pc = 0x108584u;
    SET_GPR_U32(ctx, 31, 0x10858Cu);
    ctx->pc = 0x108588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108584u;
    // 0x108588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x108584u, 0x10858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10858Cu;
label_10858c:
    // 0x10858c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108590: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x108590u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x108594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108598: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x108598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x10859c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10859cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1085a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1085a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1085a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1085a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1085A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1085ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085A8u;
        // 0x1085ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1085B0u;
}
