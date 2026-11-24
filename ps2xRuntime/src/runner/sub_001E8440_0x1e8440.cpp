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

// Function: sub_001E8440
// Address: 0x1e8440 - 0x1e8598
void sub_001E8440_0x1e8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8440_0x1e8440");
#endif

    switch (ctx->pc) {
        case 0x1e8440u: goto label_1e8440;
        case 0x1e8444u: goto label_1e8444;
        case 0x1e8448u: goto label_1e8448;
        case 0x1e844cu: goto label_1e844c;
        case 0x1e8450u: goto label_1e8450;
        case 0x1e8454u: goto label_1e8454;
        case 0x1e8458u: goto label_1e8458;
        case 0x1e845cu: goto label_1e845c;
        case 0x1e8460u: goto label_1e8460;
        case 0x1e8464u: goto label_1e8464;
        case 0x1e8468u: goto label_1e8468;
        case 0x1e846cu: goto label_1e846c;
        case 0x1e8470u: goto label_1e8470;
        case 0x1e8474u: goto label_1e8474;
        case 0x1e8478u: goto label_1e8478;
        case 0x1e847cu: goto label_1e847c;
        case 0x1e8480u: goto label_1e8480;
        case 0x1e8484u: goto label_1e8484;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e848cu: goto label_1e848c;
        case 0x1e8490u: goto label_1e8490;
        case 0x1e8494u: goto label_1e8494;
        case 0x1e8498u: goto label_1e8498;
        case 0x1e849cu: goto label_1e849c;
        case 0x1e84a0u: goto label_1e84a0;
        case 0x1e84a4u: goto label_1e84a4;
        case 0x1e84a8u: goto label_1e84a8;
        case 0x1e84acu: goto label_1e84ac;
        case 0x1e84b0u: goto label_1e84b0;
        case 0x1e84b4u: goto label_1e84b4;
        case 0x1e84b8u: goto label_1e84b8;
        case 0x1e84bcu: goto label_1e84bc;
        case 0x1e84c0u: goto label_1e84c0;
        case 0x1e84c4u: goto label_1e84c4;
        case 0x1e84c8u: goto label_1e84c8;
        case 0x1e84ccu: goto label_1e84cc;
        case 0x1e84d0u: goto label_1e84d0;
        case 0x1e84d4u: goto label_1e84d4;
        case 0x1e84d8u: goto label_1e84d8;
        case 0x1e84dcu: goto label_1e84dc;
        case 0x1e84e0u: goto label_1e84e0;
        case 0x1e84e4u: goto label_1e84e4;
        case 0x1e84e8u: goto label_1e84e8;
        case 0x1e84ecu: goto label_1e84ec;
        case 0x1e84f0u: goto label_1e84f0;
        case 0x1e84f4u: goto label_1e84f4;
        case 0x1e84f8u: goto label_1e84f8;
        case 0x1e84fcu: goto label_1e84fc;
        case 0x1e8500u: goto label_1e8500;
        case 0x1e8504u: goto label_1e8504;
        case 0x1e8508u: goto label_1e8508;
        case 0x1e850cu: goto label_1e850c;
        case 0x1e8510u: goto label_1e8510;
        case 0x1e8514u: goto label_1e8514;
        case 0x1e8518u: goto label_1e8518;
        case 0x1e851cu: goto label_1e851c;
        case 0x1e8520u: goto label_1e8520;
        case 0x1e8524u: goto label_1e8524;
        case 0x1e8528u: goto label_1e8528;
        case 0x1e852cu: goto label_1e852c;
        case 0x1e8530u: goto label_1e8530;
        case 0x1e8534u: goto label_1e8534;
        case 0x1e8538u: goto label_1e8538;
        case 0x1e853cu: goto label_1e853c;
        case 0x1e8540u: goto label_1e8540;
        case 0x1e8544u: goto label_1e8544;
        case 0x1e8548u: goto label_1e8548;
        case 0x1e854cu: goto label_1e854c;
        case 0x1e8550u: goto label_1e8550;
        case 0x1e8554u: goto label_1e8554;
        case 0x1e8558u: goto label_1e8558;
        case 0x1e855cu: goto label_1e855c;
        case 0x1e8560u: goto label_1e8560;
        case 0x1e8564u: goto label_1e8564;
        case 0x1e8568u: goto label_1e8568;
        case 0x1e856cu: goto label_1e856c;
        case 0x1e8570u: goto label_1e8570;
        case 0x1e8574u: goto label_1e8574;
        case 0x1e8578u: goto label_1e8578;
        case 0x1e857cu: goto label_1e857c;
        case 0x1e8580u: goto label_1e8580;
        case 0x1e8584u: goto label_1e8584;
        case 0x1e8588u: goto label_1e8588;
        case 0x1e858cu: goto label_1e858c;
        case 0x1e8590u: goto label_1e8590;
        case 0x1e8594u: goto label_1e8594;
        default: break;
    }

    ctx->pc = 0x1e8440u;

label_1e8440:
    // 0x1e8440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e8444:
    // 0x1e8444: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e8444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e8448:
    // 0x1e8448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e844c:
    // 0x1e844c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8450:
    // 0x1e8450: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e8450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8454:
    // 0x1e8454: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e8458:
    if (ctx->pc == 0x1E8458u) {
        ctx->pc = 0x1E8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8454u;
        // 0x1e8458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E845Cu;
        goto label_1e845c;
    }
    ctx->pc = 0x1E8454u;
    {
        const bool branch_taken_0x1e8454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8454u;
        // 0x1e8458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8454) {
            ctx->pc = 0x1E8468u;
            goto label_1e8468;
        }
    }
    ctx->pc = 0x1E845Cu;
label_1e845c:
    // 0x1e845c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1e8460:
    if (ctx->pc == 0x1E8460u) {
        ctx->pc = 0x1E8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E845Cu;
        // 0x1e8460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8464u;
        goto label_1e8464;
    }
    ctx->pc = 0x1E845Cu;
    {
        const bool branch_taken_0x1e845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E845Cu;
        // 0x1e8460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e845c) {
            ctx->pc = 0x1E8588u;
            goto label_1e8588;
        }
    }
    ctx->pc = 0x1E8464u;
label_1e8464:
    // 0x1e8464: 0x0  nop
    ctx->pc = 0x1e8464u;
    // NOP
label_1e8468:
    // 0x1e8468: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1e8468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1e846c:
    // 0x1e846c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e8470:
    // 0x1e8470: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e8470u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e8474:
    // 0x1e8474: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8478:
    // 0x1e8478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e847c:
    // 0x1e847c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e847cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e8480:
    // 0x1e8480: 0x86030038  lh          $v1, 0x38($s0)
    ctx->pc = 0x1e8480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_1e8484:
    // 0x1e8484: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e8488:
    if (ctx->pc == 0x1E8488u) {
        ctx->pc = 0x1E848Cu;
        goto label_1e848c;
    }
    ctx->pc = 0x1E8484u;
    {
        const bool branch_taken_0x1e8484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8484) {
            ctx->pc = 0x1E84A8u;
            goto label_1e84a8;
        }
    }
    ctx->pc = 0x1E848Cu;
label_1e848c:
    // 0x1e848c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e848cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8490:
    // 0x1e8490: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e8490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e8494:
    // 0x1e8494: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e8498:
    if (ctx->pc == 0x1E8498u) {
        ctx->pc = 0x1E8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8494u;
        // 0x1e8498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E849Cu;
        goto label_1e849c;
    }
    ctx->pc = 0x1E8494u;
    {
        const bool branch_taken_0x1e8494 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8494u;
        // 0x1e8498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8494) {
            ctx->pc = 0x1E84D0u;
            goto label_1e84d0;
        }
    }
    ctx->pc = 0x1E849Cu;
label_1e849c:
    // 0x1e849c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e849cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e84a0:
    // 0x1e84a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e84a4:
    if (ctx->pc == 0x1E84A4u) {
        ctx->pc = 0x1E84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84A0u;
        // 0x1e84a4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84A8u;
        goto label_1e84a8;
    }
    ctx->pc = 0x1E84A0u;
    {
        const bool branch_taken_0x1e84a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84A0u;
        // 0x1e84a4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84a0) {
            ctx->pc = 0x1E84D0u;
            goto label_1e84d0;
        }
    }
    ctx->pc = 0x1E84A8u;
label_1e84a8:
    // 0x1e84a8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e84ac:
    // 0x1e84ac: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e84acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e84b0:
    // 0x1e84b0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e84b4:
    if (ctx->pc == 0x1E84B4u) {
        ctx->pc = 0x1E84B8u;
        goto label_1e84b8;
    }
    ctx->pc = 0x1E84B0u;
    {
        const bool branch_taken_0x1e84b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e84b0) {
            ctx->pc = 0x1E84D0u;
            goto label_1e84d0;
        }
    }
    ctx->pc = 0x1E84B8u;
label_1e84b8:
    // 0x1e84b8: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e84bc:
    // 0x1e84bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e84bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e84c0:
    // 0x1e84c0: 0x320f809  jalr        $t9
label_1e84c4:
    if (ctx->pc == 0x1E84C4u) {
        ctx->pc = 0x1E84C8u;
        goto label_1e84c8;
    }
    ctx->pc = 0x1E84C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E84C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E84C0u, 0x1E84C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E84C8u;
label_1e84c8:
    // 0x1e84c8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e84cc:
    if (ctx->pc == 0x1E84CCu) {
        ctx->pc = 0x1E84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84C8u;
        // 0x1e84cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84D0u;
        goto label_1e84d0;
    }
    ctx->pc = 0x1E84C8u;
    {
        const bool branch_taken_0x1e84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84C8u;
        // 0x1e84cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84c8) {
            ctx->pc = 0x1E8588u;
            goto label_1e8588;
        }
    }
    ctx->pc = 0x1E84D0u;
label_1e84d0:
    // 0x1e84d0: 0xc0743c0  jal         func_1D0F00
label_1e84d4:
    if (ctx->pc == 0x1E84D4u) {
        ctx->pc = 0x1E84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84D0u;
        // 0x1e84d4: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84D8u;
        goto label_1e84d8;
    }
    ctx->pc = 0x1E84D0u;
    SET_GPR_U32(ctx, 31, 0x1E84D8u);
    ctx->pc = 0x1E84D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84D0u;
    // 0x1e84d4: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1E84D0u, 0x1E84D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84D8u;
label_1e84d8:
    // 0x1e84d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e84dc:
    if (ctx->pc == 0x1E84DCu) {
        ctx->pc = 0x1E84E0u;
        goto label_1e84e0;
    }
    ctx->pc = 0x1E84D8u;
    {
        const bool branch_taken_0x1e84d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e84d8) {
            ctx->pc = 0x1E84F0u;
            goto label_1e84f0;
        }
    }
    ctx->pc = 0x1E84E0u;
label_1e84e0:
    // 0x1e84e0: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e84e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e84e4:
    // 0x1e84e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e84e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e84e8:
    // 0x1e84e8: 0x320f809  jalr        $t9
label_1e84ec:
    if (ctx->pc == 0x1E84ECu) {
        ctx->pc = 0x1E84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84E8u;
        // 0x1e84ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84F0u;
        goto label_1e84f0;
    }
    ctx->pc = 0x1E84E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E84F0u);
        ctx->pc = 0x1E84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84E8u;
        // 0x1e84ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E84E8u, 0x1E84F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E84F0u;
label_1e84f0:
    // 0x1e84f0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e84f4:
    // 0x1e84f4: 0xc076800  jal         func_1DA000
label_1e84f8:
    if (ctx->pc == 0x1E84F8u) {
        ctx->pc = 0x1E84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84F4u;
        // 0x1e84f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84FCu;
        goto label_1e84fc;
    }
    ctx->pc = 0x1E84F4u;
    SET_GPR_U32(ctx, 31, 0x1E84FCu);
    ctx->pc = 0x1E84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84F4u;
    // 0x1e84f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E84F4u, 0x1E84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84FCu;
label_1e84fc:
    // 0x1e84fc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e8500:
    // 0x1e8500: 0xc076800  jal         func_1DA000
label_1e8504:
    if (ctx->pc == 0x1E8504u) {
        ctx->pc = 0x1E8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8500u;
        // 0x1e8504: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8508u;
        goto label_1e8508;
    }
    ctx->pc = 0x1E8500u;
    SET_GPR_U32(ctx, 31, 0x1E8508u);
    ctx->pc = 0x1E8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8500u;
    // 0x1e8504: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E8500u, 0x1E8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8508u;
label_1e8508:
    // 0x1e8508: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e850c:
    // 0x1e850c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e8510:
    // 0x1e8510: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1e8510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1e8514:
    // 0x1e8514: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x1e8514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_1e8518:
    // 0x1e8518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e851c:
    // 0x1e851c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1e8520:
    if (ctx->pc == 0x1E8520u) {
        ctx->pc = 0x1E8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E851Cu;
        // 0x1e8520: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8524u;
        goto label_1e8524;
    }
    ctx->pc = 0x1E851Cu;
    {
        const bool branch_taken_0x1e851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E851Cu;
        // 0x1e8520: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e851c) {
            ctx->pc = 0x1E8580u;
            goto label_1e8580;
        }
    }
    ctx->pc = 0x1E8524u;
label_1e8524:
    // 0x1e8524: 0xc0743e0  jal         func_1D0F80
label_1e8528:
    if (ctx->pc == 0x1E8528u) {
        ctx->pc = 0x1E852Cu;
        goto label_1e852c;
    }
    ctx->pc = 0x1E8524u;
    SET_GPR_U32(ctx, 31, 0x1E852Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1E8524u, 0x1E852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E852Cu;
label_1e852c:
    // 0x1e852c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e852cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e8530:
    // 0x1e8530: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1e8530u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1e8534:
    // 0x1e8534: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1e8534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e8538:
    // 0x1e8538: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1e8538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e853c:
    // 0x1e853c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e8540:
    if (ctx->pc == 0x1E8540u) {
        ctx->pc = 0x1E8544u;
        goto label_1e8544;
    }
    ctx->pc = 0x1E853Cu;
    {
        const bool branch_taken_0x1e853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e853c) {
            ctx->pc = 0x1E8558u;
            goto label_1e8558;
        }
    }
    ctx->pc = 0x1E8544u;
label_1e8544:
    // 0x1e8544: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1e8544u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e8548:
    // 0x1e8548: 0x0  nop
    ctx->pc = 0x1e8548u;
    // NOP
label_1e854c:
    // 0x1e854c: 0x0  nop
    ctx->pc = 0x1e854cu;
    // NOP
label_1e8550:
    // 0x1e8550: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8550u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8554:
    // 0x1e8554: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1e8554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1e8558:
    // 0x1e8558: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1e8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e855c:
    // 0x1e855c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1e855cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1e8560:
    // 0x1e8560: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e8564:
    if (ctx->pc == 0x1E8564u) {
        ctx->pc = 0x1E8568u;
        goto label_1e8568;
    }
    ctx->pc = 0x1E8560u;
    {
        const bool branch_taken_0x1e8560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8560) {
            ctx->pc = 0x1E8580u;
            goto label_1e8580;
        }
    }
    ctx->pc = 0x1E8568u;
label_1e8568:
    // 0x1e8568: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1e8568u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e856c:
    // 0x1e856c: 0x0  nop
    ctx->pc = 0x1e856cu;
    // NOP
label_1e8570:
    // 0x1e8570: 0x0  nop
    ctx->pc = 0x1e8570u;
    // NOP
label_1e8574:
    // 0x1e8574: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8574u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8578:
    // 0x1e8578: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1e8578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1e857c:
    // 0x1e857c: 0x0  nop
    ctx->pc = 0x1e857cu;
    // NOP
label_1e8580:
    // 0x1e8580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8584:
    // 0x1e8584: 0x0  nop
    ctx->pc = 0x1e8584u;
    // NOP
label_1e8588:
    // 0x1e8588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e858c:
    // 0x1e858c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e858cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8590:
    // 0x1e8590: 0x3e00008  jr          $ra
label_1e8594:
    if (ctx->pc == 0x1E8594u) {
        ctx->pc = 0x1E8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8590u;
        // 0x1e8594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8598u;
        goto label_fallthrough_0x1e8590;
    }
    ctx->pc = 0x1E8590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8590u;
        // 0x1e8594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8590:
    ctx->pc = 0x1E8598u;
}
