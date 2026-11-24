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

// Function: sub_00245408
// Address: 0x245408 - 0x2454c8
void sub_00245408_0x245408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245408_0x245408");
#endif

    switch (ctx->pc) {
        case 0x245408u: goto label_245408;
        case 0x24540cu: goto label_24540c;
        case 0x245410u: goto label_245410;
        case 0x245414u: goto label_245414;
        case 0x245418u: goto label_245418;
        case 0x24541cu: goto label_24541c;
        case 0x245420u: goto label_245420;
        case 0x245424u: goto label_245424;
        case 0x245428u: goto label_245428;
        case 0x24542cu: goto label_24542c;
        case 0x245430u: goto label_245430;
        case 0x245434u: goto label_245434;
        case 0x245438u: goto label_245438;
        case 0x24543cu: goto label_24543c;
        case 0x245440u: goto label_245440;
        case 0x245444u: goto label_245444;
        case 0x245448u: goto label_245448;
        case 0x24544cu: goto label_24544c;
        case 0x245450u: goto label_245450;
        case 0x245454u: goto label_245454;
        case 0x245458u: goto label_245458;
        case 0x24545cu: goto label_24545c;
        case 0x245460u: goto label_245460;
        case 0x245464u: goto label_245464;
        case 0x245468u: goto label_245468;
        case 0x24546cu: goto label_24546c;
        case 0x245470u: goto label_245470;
        case 0x245474u: goto label_245474;
        case 0x245478u: goto label_245478;
        case 0x24547cu: goto label_24547c;
        case 0x245480u: goto label_245480;
        case 0x245484u: goto label_245484;
        case 0x245488u: goto label_245488;
        case 0x24548cu: goto label_24548c;
        case 0x245490u: goto label_245490;
        case 0x245494u: goto label_245494;
        case 0x245498u: goto label_245498;
        case 0x24549cu: goto label_24549c;
        case 0x2454a0u: goto label_2454a0;
        case 0x2454a4u: goto label_2454a4;
        case 0x2454a8u: goto label_2454a8;
        case 0x2454acu: goto label_2454ac;
        case 0x2454b0u: goto label_2454b0;
        case 0x2454b4u: goto label_2454b4;
        case 0x2454b8u: goto label_2454b8;
        case 0x2454bcu: goto label_2454bc;
        case 0x2454c0u: goto label_2454c0;
        case 0x2454c4u: goto label_2454c4;
        default: break;
    }

    ctx->pc = 0x245408u;

label_245408:
    // 0x245408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24540c:
    // 0x24540c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_245410:
    // 0x245410: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x245410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245414:
    // 0x245414: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x245414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_245418:
    // 0x245418: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_24541c:
    if (ctx->pc == 0x24541Cu) {
        ctx->pc = 0x24541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245418u;
        // 0x24541c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245420u;
        goto label_245420;
    }
    ctx->pc = 0x245418u;
    {
        const bool branch_taken_0x245418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245418u;
        // 0x24541c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245418) {
            ctx->pc = 0x245438u;
            goto label_245438;
        }
    }
    ctx->pc = 0x245420u;
label_245420:
    // 0x245420: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245424:
    // 0x245424: 0xc090d8a  jal         func_243628
label_245428:
    if (ctx->pc == 0x245428u) {
        ctx->pc = 0x245428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245424u;
        // 0x245428: 0x2484c740  addiu       $a0, $a0, -0x38C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24542Cu;
        goto label_24542c;
    }
    ctx->pc = 0x245424u;
    SET_GPR_U32(ctx, 31, 0x24542Cu);
    ctx->pc = 0x245428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245424u;
    // 0x245428: 0x2484c740  addiu       $a0, $a0, -0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245424u, 0x24542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24542Cu;
label_24542c:
    // 0x24542c: 0x10000022  b           . + 4 + (0x22 << 2)
label_245430:
    if (ctx->pc == 0x245430u) {
        ctx->pc = 0x245430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24542Cu;
        // 0x245430: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245434u;
        goto label_245434;
    }
    ctx->pc = 0x24542Cu;
    {
        const bool branch_taken_0x24542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24542Cu;
        // 0x245430: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24542c) {
            ctx->pc = 0x2454B8u;
            goto label_2454b8;
        }
    }
    ctx->pc = 0x245434u;
label_245434:
    // 0x245434: 0x0  nop
    ctx->pc = 0x245434u;
    // NOP
label_245438:
    // 0x245438: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_24543c:
    if (ctx->pc == 0x24543Cu) {
        ctx->pc = 0x245440u;
        goto label_245440;
    }
    ctx->pc = 0x245438u;
    {
        const bool branch_taken_0x245438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x245438) {
            ctx->pc = 0x245458u;
            goto label_245458;
        }
    }
    ctx->pc = 0x245440u;
label_245440:
    // 0x245440: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245444:
    // 0x245444: 0xc090d8a  jal         func_243628
label_245448:
    if (ctx->pc == 0x245448u) {
        ctx->pc = 0x245448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245444u;
        // 0x245448: 0x2484c768  addiu       $a0, $a0, -0x3898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24544Cu;
        goto label_24544c;
    }
    ctx->pc = 0x245444u;
    SET_GPR_U32(ctx, 31, 0x24544Cu);
    ctx->pc = 0x245448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245444u;
    // 0x245448: 0x2484c768  addiu       $a0, $a0, -0x3898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245444u, 0x24544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24544Cu;
label_24544c:
    // 0x24544c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_245450:
    if (ctx->pc == 0x245450u) {
        ctx->pc = 0x245450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24544Cu;
        // 0x245450: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245454u;
        goto label_245454;
    }
    ctx->pc = 0x24544Cu;
    {
        const bool branch_taken_0x24544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24544Cu;
        // 0x245450: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24544c) {
            ctx->pc = 0x2454B8u;
            goto label_2454b8;
        }
    }
    ctx->pc = 0x245454u;
label_245454:
    // 0x245454: 0x0  nop
    ctx->pc = 0x245454u;
    // NOP
label_245458:
    // 0x245458: 0xc090e62  jal         func_243988
label_24545c:
    if (ctx->pc == 0x24545Cu) {
        ctx->pc = 0x245460u;
        goto label_245460;
    }
    ctx->pc = 0x245458u;
    SET_GPR_U32(ctx, 31, 0x245460u);
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x245458u, 0x245460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245460u;
label_245460:
    // 0x245460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245464:
    // 0x245464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245468:
    // 0x245468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24546c:
    // 0x24546c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_245470:
    if (ctx->pc == 0x245470u) {
        ctx->pc = 0x245470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24546Cu;
        // 0x245470: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245474u;
        goto label_245474;
    }
    ctx->pc = 0x24546Cu;
    {
        const bool branch_taken_0x24546c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x245470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24546Cu;
        // 0x245470: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24546c) {
            ctx->pc = 0x245488u;
            goto label_245488;
        }
    }
    ctx->pc = 0x245474u;
label_245474:
    // 0x245474: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245478:
    // 0x245478: 0xc090d8a  jal         func_243628
label_24547c:
    if (ctx->pc == 0x24547Cu) {
        ctx->pc = 0x24547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245478u;
        // 0x24547c: 0x2484c790  addiu       $a0, $a0, -0x3870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245480u;
        goto label_245480;
    }
    ctx->pc = 0x245478u;
    SET_GPR_U32(ctx, 31, 0x245480u);
    ctx->pc = 0x24547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245478u;
    // 0x24547c: 0x2484c790  addiu       $a0, $a0, -0x3870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245478u, 0x245480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245480u;
label_245480:
    // 0x245480: 0x1000000d  b           . + 4 + (0xD << 2)
label_245484:
    if (ctx->pc == 0x245484u) {
        ctx->pc = 0x245484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245480u;
        // 0x245484: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245488u;
        goto label_245488;
    }
    ctx->pc = 0x245480u;
    {
        const bool branch_taken_0x245480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245480u;
        // 0x245484: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245480) {
            ctx->pc = 0x2454B8u;
            goto label_2454b8;
        }
    }
    ctx->pc = 0x245488u;
label_245488:
    // 0x245488: 0xc049590  jal         func_125640
label_24548c:
    if (ctx->pc == 0x24548Cu) {
        ctx->pc = 0x245490u;
        goto label_245490;
    }
    ctx->pc = 0x245488u;
    SET_GPR_U32(ctx, 31, 0x245490u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x245488u, 0x245490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245490u;
label_245490:
    // 0x245490: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x245490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_245494:
    // 0x245494: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x245494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_245498:
    // 0x245498: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24549c:
    // 0x24549c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24549cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2454a0:
    // 0x2454a0: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2454a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2454a4:
    // 0x2454a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2454a8:
    if (ctx->pc == 0x2454A8u) {
        ctx->pc = 0x2454A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454A4u;
        // 0x2454a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454ACu;
        goto label_2454ac;
    }
    ctx->pc = 0x2454A4u;
    {
        const bool branch_taken_0x2454a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2454A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454A4u;
        // 0x2454a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454a4) {
            ctx->pc = 0x2454B4u;
            goto label_2454b4;
        }
    }
    ctx->pc = 0x2454ACu;
label_2454ac:
    // 0x2454ac: 0x40f809  jalr        $v0
label_2454b0:
    if (ctx->pc == 0x2454B0u) {
        ctx->pc = 0x2454B4u;
        goto label_2454b4;
    }
    ctx->pc = 0x2454ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2454B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2454ACu, 0x2454B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2454B4u;
label_2454b4:
    // 0x2454b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2454b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2454b8:
    // 0x2454b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2454b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2454bc:
    // 0x2454bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2454bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2454c0:
    // 0x2454c0: 0x3e00008  jr          $ra
label_2454c4:
    if (ctx->pc == 0x2454C4u) {
        ctx->pc = 0x2454C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454C0u;
        // 0x2454c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454C8u;
        goto label_fallthrough_0x2454c0;
    }
    ctx->pc = 0x2454C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2454C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454C0u;
        // 0x2454c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2454C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2454c0:
    ctx->pc = 0x2454C8u;
}
