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

// Function: sub_002D95F0
// Address: 0x2d95f0 - 0x2d9790
void sub_002D95F0_0x2d95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D95F0_0x2d95f0");
#endif

    switch (ctx->pc) {
        case 0x2d9628u: goto label_2d9628;
        case 0x2d9660u: goto label_2d9660;
        case 0x2d9678u: goto label_2d9678;
        case 0x2d9698u: goto label_2d9698;
        case 0x2d96b0u: goto label_2d96b0;
        case 0x2d96f0u: goto label_2d96f0;
        case 0x2d9708u: goto label_2d9708;
        case 0x2d9720u: goto label_2d9720;
        case 0x2d9738u: goto label_2d9738;
        case 0x2d9750u: goto label_2d9750;
        case 0x2d9768u: goto label_2d9768;
        default: break;
    }

    ctx->pc = 0x2d95f0u;

    // 0x2d95f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d95f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d95f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d95f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d95f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d95fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d95fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9604: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d9604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d960c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2d960cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9610: 0xa0820048  sb          $v0, 0x48($a0)
    ctx->pc = 0x2d9610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9618: 0x9082004b  lbu         $v0, 0x4B($a0)
    ctx->pc = 0x2d9618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x2d961c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2d961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2d9620: 0xc0b6578  jal         func_2D95E0
    ctx->pc = 0x2D9620u;
    SET_GPR_U32(ctx, 31, 0x2D9628u);
    ctx->pc = 0x2D9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9620u;
    // 0x2d9624: 0xa082004b  sb          $v0, 0x4B($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 75), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D95E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D95E0u, 0x2D9620u, 0x2D9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9628u;
label_2d9628:
    // 0x2d9628: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x2d9628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d962c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2d962cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2d9630: 0xa2110062  sb          $s1, 0x62($s0)
    ctx->pc = 0x2d9630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 17));
    // 0x2d9634: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x2d9634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d9638: 0xa2000063  sb          $zero, 0x63($s0)
    ctx->pc = 0x2d9638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d963c: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D963Cu;
    {
        const bool branch_taken_0x2d963c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D963Cu;
        // 0x2d9640: 0xa2000064  sb          $zero, 0x64($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d963c) {
            ctx->pc = 0x2D9768u;
            goto label_2d9768;
        }
    }
    ctx->pc = 0x2D9644u;
    // 0x2d9644: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2d9644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2d9648: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d9648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d964c: 0x24847a40  addiu       $a0, $a0, 0x7A40
    ctx->pc = 0x2d964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31296));
    // 0x2d9650: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d9650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d9654: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d9654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9658: 0x600008  jr          $v1
    ctx->pc = 0x2D9658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9660u: goto label_2d9660;
            case 0x2D9678u: goto label_2d9678;
            case 0x2D9698u: goto label_2d9698;
            case 0x2D96B0u: goto label_2d96b0;
            case 0x2D96F0u: goto label_2d96f0;
            case 0x2D9708u: goto label_2d9708;
            case 0x2D9720u: goto label_2d9720;
            case 0x2D9738u: goto label_2d9738;
            case 0x2D9750u: goto label_2d9750;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9658u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D9660u;
label_2d9660:
    // 0x2d9660: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d9664: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d9664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d966c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2D966Cu;
    {
        const bool branch_taken_0x2d966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D966Cu;
        // 0x2d9670: 0xa2030061  sb          $v1, 0x61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d966c) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9674u;
    // 0x2d9674: 0x0  nop
    ctx->pc = 0x2d9674u;
    // NOP
label_2d9678:
    // 0x2d9678: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d967c: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d967cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9680: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d9680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d9684: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x2d9684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9688: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x2d9688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d968c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d9690: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2D9690u;
    {
        const bool branch_taken_0x2d9690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9690u;
        // 0x2d9694: 0xa2030064  sb          $v1, 0x64($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9690) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9698u;
label_2d9698:
    // 0x2d9698: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d969c: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d969cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d96a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d96a4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2D96A4u;
    {
        const bool branch_taken_0x2d96a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96A4u;
        // 0x2d96a8: 0xa2030061  sb          $v1, 0x61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96a4) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D96ACu;
    // 0x2d96ac: 0x0  nop
    ctx->pc = 0x2d96acu;
    // NOP
label_2d96b0:
    // 0x2d96b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d96b4: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d96b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d96b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d96bc: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x2d96bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d96c0: 0x240300b5  addiu       $v1, $zero, 0xB5
    ctx->pc = 0x2d96c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x2d96c4: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x2d96c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d96c8: 0x240300b6  addiu       $v1, $zero, 0xB6
    ctx->pc = 0x2d96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x2d96cc: 0xa2030063  sb          $v1, 0x63($s0)
    ctx->pc = 0x2d96ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d96d0: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x2d96d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d96d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d96d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d96d8: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x2d96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d96dc: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x2d96dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d96e0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2d96e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2d96e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D96E4u;
    {
        const bool branch_taken_0x2d96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96E4u;
        // 0x2d96e8: 0xa2030064  sb          $v1, 0x64($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96e4) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D96ECu;
    // 0x2d96ec: 0x0  nop
    ctx->pc = 0x2d96ecu;
    // NOP
label_2d96f0:
    // 0x2d96f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d96f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d96f4: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d96f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d96f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d96f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d96fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D96FCu;
    {
        const bool branch_taken_0x2d96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96FCu;
        // 0x2d9700: 0xa2030061  sb          $v1, 0x61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96fc) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9704u;
    // 0x2d9704: 0x0  nop
    ctx->pc = 0x2d9704u;
    // NOP
label_2d9708:
    // 0x2d9708: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d970c: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d970cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d9710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9714: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D9714u;
    {
        const bool branch_taken_0x2d9714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9714u;
        // 0x2d9718: 0xa2030061  sb          $v1, 0x61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9714) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D971Cu;
    // 0x2d971c: 0x0  nop
    ctx->pc = 0x2d971cu;
    // NOP
label_2d9720:
    // 0x2d9720: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d9724: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d9724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9728: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d9728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d972c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D972Cu;
    {
        const bool branch_taken_0x2d972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D972Cu;
        // 0x2d9730: 0xa2030061  sb          $v1, 0x61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d972c) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9734u;
    // 0x2d9734: 0x0  nop
    ctx->pc = 0x2d9734u;
    // NOP
label_2d9738:
    // 0x2d9738: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d973c: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d973cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9740: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d9740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d9744: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D9744u;
    {
        const bool branch_taken_0x2d9744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9744u;
        // 0x2d9748: 0xa2030061  sb          $v1, 0x61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9744) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D974Cu;
    // 0x2d974c: 0x0  nop
    ctx->pc = 0x2d974cu;
    // NOP
label_2d9750:
    // 0x2d9750: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d9754: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d9754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9758: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d9758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d975c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D975Cu;
    {
        const bool branch_taken_0x2d975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D975Cu;
        // 0x2d9760: 0xa2030061  sb          $v1, 0x61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d975c) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9764u;
    // 0x2d9764: 0x0  nop
    ctx->pc = 0x2d9764u;
    // NOP
label_2d9768:
    // 0x2d9768: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d9768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d976c: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x2d976cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9770: 0xa2000061  sb          $zero, 0x61($s0)
    ctx->pc = 0x2d9770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9774: 0x0  nop
    ctx->pc = 0x2d9774u;
    // NOP
label_2d9778:
    // 0x2d9778: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d977c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d977cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9788: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9788u;
        // 0x2d978c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9790u;
}
