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

// Function: sub_00225358
// Address: 0x225358 - 0x225498
void sub_00225358_0x225358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225358_0x225358");
#endif

    switch (ctx->pc) {
        case 0x225380u: goto label_225380;
        case 0x2253d0u: goto label_2253d0;
        case 0x2253f0u: goto label_2253f0;
        case 0x225410u: goto label_225410;
        case 0x225430u: goto label_225430;
        case 0x225450u: goto label_225450;
        case 0x225470u: goto label_225470;
        default: break;
    }

    ctx->pc = 0x225358u;

    // 0x225358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22535c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225360: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x225360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225368: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x225368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22536c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22536cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225374: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x225378: 0xc08952c  jal         func_2254B0
    ctx->pc = 0x225378u;
    SET_GPR_U32(ctx, 31, 0x225380u);
    ctx->pc = 0x22537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225378u;
    // 0x22537c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2254B0u, 0x225378u, 0x225380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225380u;
label_225380:
    // 0x225380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225384: 0x54430044  bnel        $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x225384u;
    {
        const bool branch_taken_0x225384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225384) {
            ctx->pc = 0x225388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225384u;
            // 0x225388: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225498u;
            return;
        }
    }
    ctx->pc = 0x22538Cu;
    // 0x22538c: 0x2e220065  sltiu       $v0, $s1, 0x65
    ctx->pc = 0x22538cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x225390: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x225390u;
    {
        const bool branch_taken_0x225390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225390u;
        // 0x225394: 0xae110034  sw          $s1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225390) {
            ctx->pc = 0x225470u;
            goto label_225470;
        }
    }
    ctx->pc = 0x225398u;
    // 0x225398: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x225398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22539c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x22539cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2253a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2253a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2253a4: 0x8c639030  lw          $v1, -0x6FD0($v1)
    ctx->pc = 0x2253a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938672)));
    // 0x2253a8: 0x600008  jr          $v1
    ctx->pc = 0x2253A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2253B0u: goto label_2253b0;
            case 0x2253D0u: goto label_2253d0;
            case 0x2253F0u: goto label_2253f0;
            case 0x225410u: goto label_225410;
            case 0x225430u: goto label_225430;
            case 0x225450u: goto label_225450;
            case 0x225470u: goto label_225470;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2253A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2253B0u;
label_2253b0:
    // 0x2253b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2253b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2253b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2253b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2253b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2253bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2253c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2253c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2253c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2253c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2253c8: 0x8089554  j           func_225550
    ctx->pc = 0x2253C8u;
    ctx->pc = 0x2253CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253C8u;
    // 0x2253cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225550u;
    sub_00225550_0x225550(rdram, ctx, runtime); return;
    ctx->pc = 0x2253D0u;
label_2253d0:
    // 0x2253d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2253d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2253d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2253d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2253d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2253dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2253e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2253e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2253e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2253e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2253e8: 0x8089590  j           func_225640
    ctx->pc = 0x2253E8u;
    ctx->pc = 0x2253ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253E8u;
    // 0x2253ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225640u;
    sub_00225640_0x225640(rdram, ctx, runtime); return;
    ctx->pc = 0x2253F0u;
label_2253f0:
    // 0x2253f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2253f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2253f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2253f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2253f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2253fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225404: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225408: 0x8089598  j           func_225660
    ctx->pc = 0x225408u;
    ctx->pc = 0x22540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225408u;
    // 0x22540c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225660u;
    sub_00225660_0x225660(rdram, ctx, runtime); return;
    ctx->pc = 0x225410u;
label_225410:
    // 0x225410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22541c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22541cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225424: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225428: 0x80895a0  j           func_225680
    ctx->pc = 0x225428u;
    ctx->pc = 0x22542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225428u;
    // 0x22542c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225680u;
    sub_00225680_0x225680(rdram, ctx, runtime); return;
    ctx->pc = 0x225430u;
label_225430:
    // 0x225430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22543c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22543cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225444: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225448: 0x80895a8  j           func_2256A0
    ctx->pc = 0x225448u;
    ctx->pc = 0x22544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225448u;
    // 0x22544c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2256A0u;
    sub_002256A0_0x2256a0(rdram, ctx, runtime); return;
    ctx->pc = 0x225450u;
label_225450:
    // 0x225450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225458: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22545c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22545cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225464: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225468: 0x808955c  j           func_225570
    ctx->pc = 0x225468u;
    ctx->pc = 0x22546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225468u;
    // 0x22546c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    sub_00225570_0x225570(rdram, ctx, runtime); return;
    ctx->pc = 0x225470u;
label_225470:
    // 0x225470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22547c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22547cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225480: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x225480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x225484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225488: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22548c: 0x24c68ff0  addiu       $a2, $a2, -0x7010
    ctx->pc = 0x22548cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938608));
    // 0x225490: 0x80898b2  j           func_2262C8
    ctx->pc = 0x225490u;
    ctx->pc = 0x225494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225490u;
    // 0x225494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x225498u;
}
