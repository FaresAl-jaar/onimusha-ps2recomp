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

// Function: sub_0017E530
// Address: 0x17e530 - 0x17e61c
void sub_0017E530_0x17e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E530_0x17e530");
#endif

    switch (ctx->pc) {
        case 0x17e530u: goto label_17e530;
        case 0x17e534u: goto label_17e534;
        case 0x17e538u: goto label_17e538;
        case 0x17e53cu: goto label_17e53c;
        case 0x17e540u: goto label_17e540;
        case 0x17e544u: goto label_17e544;
        case 0x17e548u: goto label_17e548;
        case 0x17e54cu: goto label_17e54c;
        case 0x17e550u: goto label_17e550;
        case 0x17e554u: goto label_17e554;
        case 0x17e558u: goto label_17e558;
        case 0x17e55cu: goto label_17e55c;
        case 0x17e560u: goto label_17e560;
        case 0x17e564u: goto label_17e564;
        case 0x17e568u: goto label_17e568;
        case 0x17e56cu: goto label_17e56c;
        case 0x17e570u: goto label_17e570;
        case 0x17e574u: goto label_17e574;
        case 0x17e578u: goto label_17e578;
        case 0x17e57cu: goto label_17e57c;
        case 0x17e580u: goto label_17e580;
        case 0x17e584u: goto label_17e584;
        case 0x17e588u: goto label_17e588;
        case 0x17e58cu: goto label_17e58c;
        case 0x17e590u: goto label_17e590;
        case 0x17e594u: goto label_17e594;
        case 0x17e598u: goto label_17e598;
        case 0x17e59cu: goto label_17e59c;
        case 0x17e5a0u: goto label_17e5a0;
        case 0x17e5a4u: goto label_17e5a4;
        case 0x17e5a8u: goto label_17e5a8;
        case 0x17e5acu: goto label_17e5ac;
        case 0x17e5b0u: goto label_17e5b0;
        case 0x17e5b4u: goto label_17e5b4;
        case 0x17e5b8u: goto label_17e5b8;
        case 0x17e5bcu: goto label_17e5bc;
        case 0x17e5c0u: goto label_17e5c0;
        case 0x17e5c4u: goto label_17e5c4;
        case 0x17e5c8u: goto label_17e5c8;
        case 0x17e5ccu: goto label_17e5cc;
        case 0x17e5d0u: goto label_17e5d0;
        case 0x17e5d4u: goto label_17e5d4;
        case 0x17e5d8u: goto label_17e5d8;
        case 0x17e5dcu: goto label_17e5dc;
        case 0x17e5e0u: goto label_17e5e0;
        case 0x17e5e4u: goto label_17e5e4;
        case 0x17e5e8u: goto label_17e5e8;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e5f0u: goto label_17e5f0;
        case 0x17e5f4u: goto label_17e5f4;
        case 0x17e5f8u: goto label_17e5f8;
        case 0x17e5fcu: goto label_17e5fc;
        case 0x17e600u: goto label_17e600;
        case 0x17e604u: goto label_17e604;
        case 0x17e608u: goto label_17e608;
        case 0x17e60cu: goto label_17e60c;
        case 0x17e610u: goto label_17e610;
        case 0x17e614u: goto label_17e614;
        case 0x17e618u: goto label_17e618;
        default: break;
    }

    ctx->pc = 0x17e530u;

label_17e530:
    // 0x17e530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17e534:
    // 0x17e534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17e538:
    // 0x17e538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e53c:
    // 0x17e53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17e540:
    // 0x17e540: 0x9083011c  lbu         $v1, 0x11C($a0)
    ctx->pc = 0x17e540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_17e544:
    // 0x17e544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17e548:
    // 0x17e548: 0xa083011c  sb          $v1, 0x11C($a0)
    ctx->pc = 0x17e548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 3));
label_17e54c:
    // 0x17e54c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x17e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_17e550:
    // 0x17e550: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_17e554:
    if (ctx->pc == 0x17E554u) {
        ctx->pc = 0x17E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E550u;
        // 0x17e554: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E558u;
        goto label_17e558;
    }
    ctx->pc = 0x17E550u;
    {
        const bool branch_taken_0x17e550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E550u;
        // 0x17e554: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e550) {
            ctx->pc = 0x17E608u;
            goto label_17e608;
        }
    }
    ctx->pc = 0x17E558u;
label_17e558:
    // 0x17e558: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x17e558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_17e55c:
    // 0x17e55c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x17e55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_17e560:
    // 0x17e560: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x17e560u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_17e564:
    // 0x17e564: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x17e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_17e568:
    // 0x17e568: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x17e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_17e56c:
    // 0x17e56c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_17e570:
    // 0x17e570: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x17e570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
label_17e574:
    // 0x17e574: 0xc0a83f8  jal         func_2A0FE0
label_17e578:
    if (ctx->pc == 0x17E578u) {
        ctx->pc = 0x17E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E574u;
        // 0x17e578: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E57Cu;
        goto label_17e57c;
    }
    ctx->pc = 0x17E574u;
    SET_GPR_U32(ctx, 31, 0x17E57Cu);
    ctx->pc = 0x17E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E574u;
    // 0x17e578: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0FE0u, 0x17E574u, 0x17E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E57Cu;
label_17e57c:
    // 0x17e57c: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x17e57cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_17e580:
    // 0x17e580: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_17e584:
    if (ctx->pc == 0x17E584u) {
        ctx->pc = 0x17E588u;
        goto label_17e588;
    }
    ctx->pc = 0x17E580u;
    {
        const bool branch_taken_0x17e580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e580) {
            ctx->pc = 0x17E608u;
            goto label_17e608;
        }
    }
    ctx->pc = 0x17E588u;
label_17e588:
    // 0x17e588: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x17e588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_17e58c:
    // 0x17e58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17e590:
    // 0x17e590: 0xc0600fc  jal         func_1803F0
label_17e594:
    if (ctx->pc == 0x17E594u) {
        ctx->pc = 0x17E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E590u;
        // 0x17e594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E598u;
        goto label_17e598;
    }
    ctx->pc = 0x17E590u;
    SET_GPR_U32(ctx, 31, 0x17E598u);
    ctx->pc = 0x17E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E590u;
    // 0x17e594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1803F0u, 0x17E590u, 0x17E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E598u;
label_17e598:
    // 0x17e598: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17e598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17e59c:
    // 0x17e59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17e5a0:
    // 0x17e5a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e5a4:
    // 0x17e5a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17e5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17e5a8:
    // 0x17e5a8: 0xc060a74  jal         func_1829D0
label_17e5ac:
    if (ctx->pc == 0x17E5ACu) {
        ctx->pc = 0x17E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5A8u;
        // 0x17e5ac: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5B0u;
        goto label_17e5b0;
    }
    ctx->pc = 0x17E5A8u;
    SET_GPR_U32(ctx, 31, 0x17E5B0u);
    ctx->pc = 0x17E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5A8u;
    // 0x17e5ac: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x17E5A8u, 0x17E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5B0u;
label_17e5b0:
    // 0x17e5b0: 0x96032ace  lhu         $v1, 0x2ACE($s0)
    ctx->pc = 0x17e5b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10958)));
label_17e5b4:
    // 0x17e5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e5b8:
    // 0x17e5b8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_17e5bc:
    if (ctx->pc == 0x17E5BCu) {
        ctx->pc = 0x17E5C0u;
        goto label_17e5c0;
    }
    ctx->pc = 0x17E5B8u;
    {
        const bool branch_taken_0x17e5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e5b8) {
            ctx->pc = 0x17E5E8u;
            goto label_17e5e8;
        }
    }
    ctx->pc = 0x17E5C0u;
label_17e5c0:
    // 0x17e5c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x17e5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17e5c4:
    // 0x17e5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17e5c8:
    // 0x17e5c8: 0x96062acc  lhu         $a2, 0x2ACC($s0)
    ctx->pc = 0x17e5c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
label_17e5cc:
    // 0x17e5cc: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x17e5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_17e5d0:
    // 0x17e5d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x17e5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_17e5d4:
    // 0x17e5d4: 0x320f809  jalr        $t9
label_17e5d8:
    if (ctx->pc == 0x17E5D8u) {
        ctx->pc = 0x17E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5D4u;
        // 0x17e5d8: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5DCu;
        goto label_17e5dc;
    }
    ctx->pc = 0x17E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E5DCu);
        ctx->pc = 0x17E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5D4u;
        // 0x17e5d8: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E5D4u, 0x17E5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E5DCu;
label_17e5dc:
    // 0x17e5dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_17e5e0:
    if (ctx->pc == 0x17E5E0u) {
        ctx->pc = 0x17E5E4u;
        goto label_17e5e4;
    }
    ctx->pc = 0x17E5DCu;
    {
        const bool branch_taken_0x17e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5dc) {
            ctx->pc = 0x17E608u;
            goto label_17e608;
        }
    }
    ctx->pc = 0x17E5E4u;
label_17e5e4:
    // 0x17e5e4: 0x0  nop
    ctx->pc = 0x17e5e4u;
    // NOP
label_17e5e8:
    // 0x17e5e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x17e5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17e5ec:
    // 0x17e5ec: 0x96062acc  lhu         $a2, 0x2ACC($s0)
    ctx->pc = 0x17e5ecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
label_17e5f0:
    // 0x17e5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17e5f4:
    // 0x17e5f4: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x17e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_17e5f8:
    // 0x17e5f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x17e5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_17e5fc:
    // 0x17e5fc: 0x320f809  jalr        $t9
label_17e600:
    if (ctx->pc == 0x17E600u) {
        ctx->pc = 0x17E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5FCu;
        // 0x17e600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E604u;
        goto label_17e604;
    }
    ctx->pc = 0x17E5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E604u);
        ctx->pc = 0x17E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5FCu;
        // 0x17e600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E5FCu, 0x17E604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E604u;
label_17e604:
    // 0x17e604: 0x0  nop
    ctx->pc = 0x17e604u;
    // NOP
label_17e608:
    // 0x17e608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e60c:
    // 0x17e60c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e610:
    // 0x17e610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e614:
    // 0x17e614: 0x3e00008  jr          $ra
label_17e618:
    if (ctx->pc == 0x17E618u) {
        ctx->pc = 0x17E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E614u;
        // 0x17e618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E61Cu;
        goto label_fallthrough_0x17e614;
    }
    ctx->pc = 0x17E614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E614u;
        // 0x17e618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e614:
    ctx->pc = 0x17E61Cu;
}
