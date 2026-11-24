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

// Function: sub_00384370
// Address: 0x384370 - 0x384530
void sub_00384370_0x384370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384370_0x384370");
#endif

    switch (ctx->pc) {
        case 0x3843bcu: goto label_3843bc;
        case 0x3843dcu: goto label_3843dc;
        case 0x3843e8u: goto label_3843e8;
        case 0x384408u: goto label_384408;
        case 0x384414u: goto label_384414;
        case 0x384428u: goto label_384428;
        case 0x38445cu: goto label_38445c;
        case 0x38447cu: goto label_38447c;
        case 0x3844b0u: goto label_3844b0;
        case 0x384510u: goto label_384510;
        case 0x38451cu: goto label_38451c;
        default: break;
    }

    ctx->pc = 0x384370u;

    // 0x384370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384374: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x384374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x384378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38437c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x384380: 0x8c255f10  lw          $a1, 0x5F10($at)
    ctx->pc = 0x384380u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x695F10u));
    // 0x384384: 0x30a34008  andi        $v1, $a1, 0x4008
    ctx->pc = 0x384384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16392);
    // 0x384388: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x384388u;
    {
        const bool branch_taken_0x384388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384388u;
        // 0x38438c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384388) {
            ctx->pc = 0x384468u;
            goto label_384468;
        }
    }
    ctx->pc = 0x384390u;
    // 0x384390: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x384390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x384394: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x384394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x384398: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x384398u;
    {
        const bool branch_taken_0x384398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x384398) {
            ctx->pc = 0x384420u;
            goto label_384420;
        }
    }
    ctx->pc = 0x3843A0u;
    // 0x3843a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3843a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3843a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3843a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843a8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3843a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3843ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3843acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3843b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843b4: 0xc063d30  jal         func_18F4C0
    ctx->pc = 0x3843B4u;
    SET_GPR_U32(ctx, 31, 0x3843BCu);
    ctx->pc = 0x3843B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843B4u;
    // 0x3843b8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x3843B4u, 0x3843BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843BCu;
label_3843bc:
    // 0x3843bc: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3843bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3843c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3843C0u;
    {
        const bool branch_taken_0x3843c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3843C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843C0u;
        // 0x3843c4: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843c0) {
            ctx->pc = 0x3843F0u;
            goto label_3843f0;
        }
    }
    ctx->pc = 0x3843C8u;
    // 0x3843c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3843c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3843cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3843ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3843d0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3843d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3843d4: 0xc05e564  jal         func_179590
    ctx->pc = 0x3843D4u;
    SET_GPR_U32(ctx, 31, 0x3843DCu);
    ctx->pc = 0x3843D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843D4u;
    // 0x3843d8: 0xa025fc8c  sb          $a1, -0x374($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966412), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179590u, 0x3843D4u, 0x3843DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843DCu;
label_3843dc:
    // 0x3843dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3843dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843e0: 0xc0ca480  jal         func_329200
    ctx->pc = 0x3843E0u;
    SET_GPR_U32(ctx, 31, 0x3843E8u);
    ctx->pc = 0x3843E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843E0u;
    // 0x3843e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329200u, 0x3843E0u, 0x3843E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843E8u;
label_3843e8:
    // 0x3843e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3843E8u;
    {
        const bool branch_taken_0x3843e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3843e8) {
            ctx->pc = 0x384418u;
            goto label_384418;
        }
    }
    ctx->pc = 0x3843F0u;
label_3843f0:
    // 0x3843f0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3843f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3843f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3843f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3843f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3843f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3843fc: 0xa025fc8c  sb          $a1, -0x374($at)
    ctx->pc = 0x3843fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81FC8Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x81FC8Cu, _value); } while (0);
    // 0x384400: 0xc05e564  jal         func_179590
    ctx->pc = 0x384400u;
    SET_GPR_U32(ctx, 31, 0x384408u);
    ctx->pc = 0x384404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384400u;
    // 0x384404: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179590u, 0x384400u, 0x384408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384408u;
label_384408:
    // 0x384408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38440c: 0xc0ca480  jal         func_329200
    ctx->pc = 0x38440Cu;
    SET_GPR_U32(ctx, 31, 0x384414u);
    ctx->pc = 0x384410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38440Cu;
    // 0x384410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329200u, 0x38440Cu, 0x384414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384414u;
label_384414:
    // 0x384414: 0x0  nop
    ctx->pc = 0x384414u;
    // NOP
label_384418:
    // 0x384418: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x384418u;
    {
        const bool branch_taken_0x384418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384418) {
            ctx->pc = 0x384520u;
            goto label_384520;
        }
    }
    ctx->pc = 0x384420u;
label_384420:
    // 0x384420: 0xc0e114c  jal         func_384530
    ctx->pc = 0x384420u;
    SET_GPR_U32(ctx, 31, 0x384428u);
    ctx->pc = 0x384530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384530u, 0x384420u, 0x384428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384428u;
label_384428:
    // 0x384428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x384428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38442c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x38442cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384430: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384434: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384438: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x384438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x38443c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38443cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384440: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x384440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38444c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38444cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384450: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384450u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384454: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384454u;
    SET_GPR_U32(ctx, 31, 0x38445Cu);
    ctx->pc = 0x384458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384454u;
    // 0x384458: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384454u, 0x38445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38445Cu;
label_38445c:
    // 0x38445c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x38445Cu;
    {
        const bool branch_taken_0x38445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38445c) {
            ctx->pc = 0x384520u;
            goto label_384520;
        }
    }
    ctx->pc = 0x384464u;
    // 0x384464: 0x0  nop
    ctx->pc = 0x384464u;
    // NOP
label_384468:
    // 0x384468: 0x30a33000  andi        $v1, $a1, 0x3000
    ctx->pc = 0x384468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12288);
    // 0x38446c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x38446Cu;
    {
        const bool branch_taken_0x38446c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38446c) {
            ctx->pc = 0x3844B8u;
            goto label_3844b8;
        }
    }
    ctx->pc = 0x384474u;
    // 0x384474: 0xc0e1008  jal         func_384020
    ctx->pc = 0x384474u;
    SET_GPR_U32(ctx, 31, 0x38447Cu);
    ctx->pc = 0x384020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384020u, 0x384474u, 0x38447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38447Cu;
label_38447c:
    // 0x38447c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384480: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384484: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384488: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x38448c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x38448cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x384490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384494: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x384494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38449c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38449cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3844a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3844a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844a8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3844A8u;
    SET_GPR_U32(ctx, 31, 0x3844B0u);
    ctx->pc = 0x3844ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844A8u;
    // 0x3844ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3844A8u, 0x3844B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844B0u;
label_3844b0:
    // 0x3844b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3844B0u;
    {
        const bool branch_taken_0x3844b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3844b0) {
            ctx->pc = 0x384520u;
            goto label_384520;
        }
    }
    ctx->pc = 0x3844B8u;
label_3844b8:
    // 0x3844b8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3844b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3844bc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3844bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3844c0: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3844c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3844c4: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x3844c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3844c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3844c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3844cc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3844CCu;
    {
        const bool branch_taken_0x3844cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3844cc) {
            ctx->pc = 0x384520u;
            goto label_384520;
        }
    }
    ctx->pc = 0x3844D4u;
    // 0x3844d4: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3844d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3844d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3844d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3844dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3844dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3844e0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3844e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3844e4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3844e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3844e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3844e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3844ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3844f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3844f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3844f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3844fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384500: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x384500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x384504: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x384504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x384508: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384508u;
    SET_GPR_U32(ctx, 31, 0x384510u);
    ctx->pc = 0x38450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384508u;
    // 0x38450c: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384508u, 0x384510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384510u;
label_384510:
    // 0x384510: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x384510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x384514: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x384514u;
    SET_GPR_U32(ctx, 31, 0x38451Cu);
    ctx->pc = 0x384518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384514u;
    // 0x384518: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x384514u, 0x38451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38451Cu;
label_38451c:
    // 0x38451c: 0x0  nop
    ctx->pc = 0x38451cu;
    // NOP
label_384520:
    // 0x384520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x384524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384528: 0x3e00008  jr          $ra
    ctx->pc = 0x384528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384528u;
        // 0x38452c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384530u;
}
