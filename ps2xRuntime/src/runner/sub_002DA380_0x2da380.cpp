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

// Function: sub_002DA380
// Address: 0x2da380 - 0x2da498
void sub_002DA380_0x2da380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA380_0x2da380");
#endif

    switch (ctx->pc) {
        case 0x2da3a8u: goto label_2da3a8;
        case 0x2da3d8u: goto label_2da3d8;
        case 0x2da438u: goto label_2da438;
        default: break;
    }

    ctx->pc = 0x2da380u;

    // 0x2da380: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x2da380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2da384: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2da384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da388: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DA388u;
    {
        const bool branch_taken_0x2da388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA388u;
        // 0x2da38c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da388) {
            ctx->pc = 0x2DA3F8u;
            goto label_2da3f8;
        }
    }
    ctx->pc = 0x2DA390u;
    // 0x2da390: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x2da390u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2da394: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2DA394u;
    {
        const bool branch_taken_0x2da394 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA394u;
        // 0x2da398: 0x24c8fff8  addiu       $t0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da394) {
            ctx->pc = 0x2DA3C8u;
            goto label_2da3c8;
        }
    }
    ctx->pc = 0x2DA39Cu;
    // 0x2da39c: 0x3c0305f5  lui         $v1, 0x5F5
    ctx->pc = 0x2da39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1525 << 16));
    // 0x2da3a0: 0x3467e100  ori         $a3, $v1, 0xE100
    ctx->pc = 0x2da3a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57600);
    // 0x2da3a4: 0x0  nop
    ctx->pc = 0x2da3a4u;
    // NOP
label_2da3a8:
    // 0x2da3a8: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2da3a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2da3ac: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x2da3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2da3b0: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x2da3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2da3b4: 0x0  nop
    ctx->pc = 0x2da3b4u;
    // NOP
    // 0x2da3b8: 0x0  nop
    ctx->pc = 0x2da3b8u;
    // NOP
    // 0x2da3bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DA3BCu;
    {
        const bool branch_taken_0x2da3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da3bc) {
            ctx->pc = 0x2DA3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da3a8;
        }
    }
    ctx->pc = 0x2DA3C4u;
    // 0x2da3c4: 0x0  nop
    ctx->pc = 0x2da3c4u;
    // NOP
label_2da3c8:
    // 0x2da3c8: 0x126082b  sltu        $at, $t1, $a2
    ctx->pc = 0x2da3c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2da3cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA3CCu;
    {
        const bool branch_taken_0x2da3cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3cc) {
            ctx->pc = 0x2DA3F8u;
            goto label_2da3f8;
        }
    }
    ctx->pc = 0x2DA3D4u;
    // 0x2da3d4: 0x0  nop
    ctx->pc = 0x2da3d4u;
    // NOP
label_2da3d8:
    // 0x2da3d8: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2da3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2da3dc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2da3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2da3e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2da3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2da3e4: 0x35040  sll         $t2, $v1, 1
    ctx->pc = 0x2da3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da3e8: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x2da3e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2da3ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DA3ECu;
    {
        const bool branch_taken_0x2da3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da3ec) {
            ctx->pc = 0x2DA3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da3d8;
        }
    }
    ctx->pc = 0x2DA3F4u;
    // 0x2da3f4: 0x0  nop
    ctx->pc = 0x2da3f4u;
    // NOP
label_2da3f8:
    // 0x2da3f8: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x2da3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2da3fc: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2da3fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2da400: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA400u;
    {
        const bool branch_taken_0x2da400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da400) {
            ctx->pc = 0x2DA410u;
            goto label_2da410;
        }
    }
    ctx->pc = 0x2DA408u;
    // 0x2da408: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2da408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da40c: 0x0  nop
    ctx->pc = 0x2da40cu;
    // NOP
label_2da410:
    // 0x2da410: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2da410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2da414: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x2da414u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2da418: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x2da418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2da41c: 0x10a0019  multu       $t0, $t2
    ctx->pc = 0x2da41cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2da420: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2da420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da424: 0x0  nop
    ctx->pc = 0x2da424u;
    // NOP
    // 0x2da428: 0x1810  mfhi        $v1
    ctx->pc = 0x2da428u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2da42c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DA42Cu;
    {
        const bool branch_taken_0x2da42c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA42Cu;
        // 0x2da430: 0x350c2  srl         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da42c) {
            ctx->pc = 0x2DA490u;
            goto label_2da490;
        }
    }
    ctx->pc = 0x2DA434u;
    // 0x2da434: 0x0  nop
    ctx->pc = 0x2da434u;
    // NOP
label_2da438:
    // 0x2da438: 0xaa182b  sltu        $v1, $a1, $t2
    ctx->pc = 0x2da438u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2da43c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA43Cu;
    {
        const bool branch_taken_0x2da43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da43c) {
            ctx->pc = 0x2DA468u;
            goto label_2da468;
        }
    }
    ctx->pc = 0x2DA444u;
    // 0x2da444: 0xaa001b  divu        $zero, $a1, $t2
    ctx->pc = 0x2da444u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2da448: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x2da448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2da44c: 0x0  nop
    ctx->pc = 0x2da44cu;
    // NOP
    // 0x2da450: 0x1812  mflo        $v1
    ctx->pc = 0x2da450u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2da454: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2da454u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da458: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x2da458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2da45c: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x2da45cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2da460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA460u;
    {
        const bool branch_taken_0x2da460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA460u;
        // 0x2da464: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da460) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA468u;
label_2da468:
    // 0x2da468: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x2da468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2da46c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2da46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2da470:
    // 0x2da470: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2da470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2da474: 0x10a0019  multu       $t0, $t2
    ctx->pc = 0x2da474u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2da478: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x2da478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2da47c: 0x0  nop
    ctx->pc = 0x2da47cu;
    // NOP
    // 0x2da480: 0x3810  mfhi        $a3
    ctx->pc = 0x2da480u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2da484: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2DA484u;
    {
        const bool branch_taken_0x2da484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA484u;
        // 0x2da488: 0x750c2  srl         $t2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da484) {
            ctx->pc = 0x2DA438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da438;
        }
    }
    ctx->pc = 0x2DA48Cu;
    // 0x2da48c: 0x0  nop
    ctx->pc = 0x2da48cu;
    // NOP
label_2da490:
    // 0x2da490: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA498u;
}
