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

// Function: sub_00150290
// Address: 0x150290 - 0x150434
void sub_00150290_0x150290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150290_0x150290");
#endif

    switch (ctx->pc) {
        case 0x1502f0u: goto label_1502f0;
        case 0x150304u: goto label_150304;
        case 0x150364u: goto label_150364;
        case 0x150378u: goto label_150378;
        case 0x1503acu: goto label_1503ac;
        case 0x1503e8u: goto label_1503e8;
        case 0x1503fcu: goto label_1503fc;
        case 0x150424u: goto label_150424;
        default: break;
    }

    ctx->pc = 0x150290u;

    // 0x150290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150294: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15029c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1502a0: 0x90246ac0  lbu         $a0, 0x6AC0($at)
    ctx->pc = 0x1502a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x7E6AC0u));
    // 0x1502a4: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1502A4u;
    {
        const bool branch_taken_0x1502a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1502A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502A4u;
        // 0x1502a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502a4) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x1502ACu;
    // 0x1502ac: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1502ACu;
    {
        const bool branch_taken_0x1502ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1502ac) {
            ctx->pc = 0x1502F8u;
            goto label_1502f8;
        }
    }
    ctx->pc = 0x1502B4u;
    // 0x1502b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1502B4u;
    {
        const bool branch_taken_0x1502b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502b4) {
            ctx->pc = 0x1502C8u;
            goto label_1502c8;
        }
    }
    ctx->pc = 0x1502BCu;
    // 0x1502bc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1502BCu;
    {
        const bool branch_taken_0x1502bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502bc) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x1502C4u;
    // 0x1502c4: 0x0  nop
    ctx->pc = 0x1502c4u;
    // NOP
label_1502c8:
    // 0x1502c8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1502c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1502cc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1502ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1502d0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1502d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1502d4: 0xa0226ac0  sb          $v0, 0x6AC0($at)
    ctx->pc = 0x1502d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x1502d8: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x1502d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x1502dc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1502e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1502e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1502e4: 0x90266ac8  lbu         $a2, 0x6AC8($at)
    ctx->pc = 0x1502e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x1502e8: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x1502E8u;
    SET_GPR_U32(ctx, 31, 0x1502F0u);
    ctx->pc = 0x1502ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502E8u;
    // 0x1502ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x1502E8u, 0x1502F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F0u;
label_1502f0:
    // 0x1502f0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1502F0u;
    {
        const bool branch_taken_0x1502f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502f0) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x1502F8u;
label_1502f8:
    // 0x1502f8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1502f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1502fc: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x1502FCu;
    SET_GPR_U32(ctx, 31, 0x150304u);
    ctx->pc = 0x150300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502FCu;
    // 0x150300: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x1502FCu, 0x150304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150304u;
label_150304:
    // 0x150304: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x150304u;
    {
        const bool branch_taken_0x150304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150304u;
        // 0x150308: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150304) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x15030Cu;
    // 0x15030c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150310: 0x90256ac0  lbu         $a1, 0x6AC0($at)
    ctx->pc = 0x150310u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27328)));
    // 0x150314: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x150314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150318: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15031c: 0x8c2495a8  lw          $a0, -0x6A58($at)
    ctx->pc = 0x15031cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8095A8u));
    // 0x150320: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150324: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x150324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x150328: 0x90236ac8  lbu         $v1, 0x6AC8($at)
    ctx->pc = 0x150328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x15032c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15032cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150330: 0xa0256ac0  sb          $a1, 0x6AC0($at)
    ctx->pc = 0x150330u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x150334: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x150334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150338: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x150338u;
    {
        const bool branch_taken_0x150338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150338u;
        // 0x15033c: 0xac2495a8  sw          $a0, -0x6A58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150338) {
            ctx->pc = 0x1503B0u;
            goto label_1503b0;
        }
    }
    ctx->pc = 0x150340u;
    // 0x150340: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150344: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x150344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x150348: 0xa0206b28  sb          $zero, 0x6B28($at)
    ctx->pc = 0x150348u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6B28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B28u, _value); } while (0);
    // 0x15034c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15034cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150350: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150354: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x150354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x150358: 0xa0266b29  sb          $a2, 0x6B29($at)
    ctx->pc = 0x150358u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7E6B29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B29u, _value); } while (0);
    // 0x15035c: 0xc053fdc  jal         func_14FF70
    ctx->pc = 0x15035Cu;
    SET_GPR_U32(ctx, 31, 0x150364u);
    ctx->pc = 0x150360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15035Cu;
    // 0x150360: 0x24050ff7  addiu       $a1, $zero, 0xFF7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF70u, 0x15035Cu, 0x150364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150364u;
label_150364:
    // 0x150364: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x150364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x150368: 0x24050241  addiu       $a1, $zero, 0x241
    ctx->pc = 0x150368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x15036c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x150370: 0xc053fdc  jal         func_14FF70
    ctx->pc = 0x150370u;
    SET_GPR_U32(ctx, 31, 0x150378u);
    ctx->pc = 0x150374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150370u;
    // 0x150374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF70u, 0x150370u, 0x150378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150378u;
label_150378:
    // 0x150378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15037c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150380: 0xa0226b29  sb          $v0, 0x6B29($at)
    ctx->pc = 0x150380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6B29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B29u, _value); } while (0);
    // 0x150384: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x150384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x150388: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x150388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15038c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150390: 0xa3828a54  sb          $v0, -0x75AC($gp)
    ctx->pc = 0x150390u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
    // 0x150394: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x150394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x150398: 0x24050a00  addiu       $a1, $zero, 0xA00
    ctx->pc = 0x150398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x15039c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x15039cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1503a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503a4: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x1503A4u;
    SET_GPR_U32(ctx, 31, 0x1503ACu);
    ctx->pc = 0x1503A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503A4u;
    // 0x1503a8: 0xa3808a55  sb          $zero, -0x75AB($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x1503A4u, 0x1503ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503ACu;
label_1503ac:
    // 0x1503ac: 0x0  nop
    ctx->pc = 0x1503acu;
    // NOP
label_1503b0:
    // 0x1503b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1503b4: 0x90236ac8  lbu         $v1, 0x6AC8($at)
    ctx->pc = 0x1503b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x1503b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1503b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1503bc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1503BCu;
    {
        const bool branch_taken_0x1503bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1503C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503BCu;
        // 0x1503c0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503bc) {
            ctx->pc = 0x150418u;
            goto label_150418;
        }
    }
    ctx->pc = 0x1503C4u;
    // 0x1503c4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1503c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1503c8: 0xa0206b28  sb          $zero, 0x6B28($at)
    ctx->pc = 0x1503c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 27432), (uint8_t)GPR_U32(ctx, 0));
    // 0x1503cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1503ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1503d0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1503d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1503d4: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x1503d8: 0xa0226b29  sb          $v0, 0x6B29($at)
    ctx->pc = 0x1503d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6B29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B29u, _value); } while (0);
    // 0x1503dc: 0x24050ff7  addiu       $a1, $zero, 0xFF7
    ctx->pc = 0x1503dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
    // 0x1503e0: 0xc053fdc  jal         func_14FF70
    ctx->pc = 0x1503E0u;
    SET_GPR_U32(ctx, 31, 0x1503E8u);
    ctx->pc = 0x1503E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503E0u;
    // 0x1503e4: 0x2406006e  addiu       $a2, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF70u, 0x1503E0u, 0x1503E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503E8u;
label_1503e8:
    // 0x1503e8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1503e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1503ec: 0x24050640  addiu       $a1, $zero, 0x640
    ctx->pc = 0x1503ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x1503f0: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x1503f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x1503f4: 0xc053fdc  jal         func_14FF70
    ctx->pc = 0x1503F4u;
    SET_GPR_U32(ctx, 31, 0x1503FCu);
    ctx->pc = 0x1503F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503F4u;
    // 0x1503f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF70u, 0x1503F4u, 0x1503FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503FCu;
label_1503fc:
    // 0x1503fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1503fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150400: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150404: 0xa0226b29  sb          $v0, 0x6B29($at)
    ctx->pc = 0x150404u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6B29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B29u, _value); } while (0);
    // 0x150408: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x150408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15040c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x15040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x150410: 0xa3838a54  sb          $v1, -0x75AC($gp)
    ctx->pc = 0x150410u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 3));
    // 0x150414: 0xa3828a55  sb          $v0, -0x75AB($gp)
    ctx->pc = 0x150414u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 2));
label_150418:
    // 0x150418: 0x24040e80  addiu       $a0, $zero, 0xE80
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3712));
    // 0x15041c: 0xc054048  jal         func_150120
    ctx->pc = 0x15041Cu;
    SET_GPR_U32(ctx, 31, 0x150424u);
    ctx->pc = 0x150420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15041Cu;
    // 0x150420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x15041Cu, 0x150424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150424u;
label_150424:
    // 0x150424: 0x0  nop
    ctx->pc = 0x150424u;
    // NOP
label_150428:
    // 0x150428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15042c: 0x3e00008  jr          $ra
    ctx->pc = 0x15042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15042Cu;
        // 0x150430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15042Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150434u;
}
