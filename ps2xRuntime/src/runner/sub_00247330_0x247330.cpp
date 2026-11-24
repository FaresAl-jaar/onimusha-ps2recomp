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

// Function: sub_00247330
// Address: 0x247330 - 0x2473e0
void sub_00247330_0x247330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247330_0x247330");
#endif

    switch (ctx->pc) {
        case 0x247330u: goto label_247330;
        case 0x247334u: goto label_247334;
        case 0x247338u: goto label_247338;
        case 0x24733cu: goto label_24733c;
        case 0x247340u: goto label_247340;
        case 0x247344u: goto label_247344;
        case 0x247348u: goto label_247348;
        case 0x24734cu: goto label_24734c;
        case 0x247350u: goto label_247350;
        case 0x247354u: goto label_247354;
        case 0x247358u: goto label_247358;
        case 0x24735cu: goto label_24735c;
        case 0x247360u: goto label_247360;
        case 0x247364u: goto label_247364;
        case 0x247368u: goto label_247368;
        case 0x24736cu: goto label_24736c;
        case 0x247370u: goto label_247370;
        case 0x247374u: goto label_247374;
        case 0x247378u: goto label_247378;
        case 0x24737cu: goto label_24737c;
        case 0x247380u: goto label_247380;
        case 0x247384u: goto label_247384;
        case 0x247388u: goto label_247388;
        case 0x24738cu: goto label_24738c;
        case 0x247390u: goto label_247390;
        case 0x247394u: goto label_247394;
        case 0x247398u: goto label_247398;
        case 0x24739cu: goto label_24739c;
        case 0x2473a0u: goto label_2473a0;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473a8u: goto label_2473a8;
        case 0x2473acu: goto label_2473ac;
        case 0x2473b0u: goto label_2473b0;
        case 0x2473b4u: goto label_2473b4;
        case 0x2473b8u: goto label_2473b8;
        case 0x2473bcu: goto label_2473bc;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473c4u: goto label_2473c4;
        case 0x2473c8u: goto label_2473c8;
        case 0x2473ccu: goto label_2473cc;
        case 0x2473d0u: goto label_2473d0;
        case 0x2473d4u: goto label_2473d4;
        case 0x2473d8u: goto label_2473d8;
        case 0x2473dcu: goto label_2473dc;
        default: break;
    }

    ctx->pc = 0x247330u;

label_247330:
    // 0x247330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_247334:
    // 0x247334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247338:
    // 0x247338: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_24733c:
    // 0x24733c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24733cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247340:
    // 0x247340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_247344:
    // 0x247344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_247348:
    // 0x247348: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_24734c:
    // 0x24734c: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x24734cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_247350:
    // 0x247350: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x247350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_247354:
    // 0x247354: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_247358:
    if (ctx->pc == 0x247358u) {
        ctx->pc = 0x247358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247354u;
        // 0x247358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24735Cu;
        goto label_24735c;
    }
    ctx->pc = 0x247354u;
    {
        const bool branch_taken_0x247354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x247358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247354u;
        // 0x247358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247354) {
            ctx->pc = 0x2473CCu;
            goto label_2473cc;
        }
    }
    ctx->pc = 0x24735Cu;
label_24735c:
    // 0x24735c: 0x0  nop
    ctx->pc = 0x24735cu;
    // NOP
label_247360:
    // 0x247360: 0xc0438e0  jal         func_10E380
label_247364:
    if (ctx->pc == 0x247364u) {
        ctx->pc = 0x247364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247360u;
        // 0x247364: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247368u;
        goto label_247368;
    }
    ctx->pc = 0x247360u;
    SET_GPR_U32(ctx, 31, 0x247368u);
    ctx->pc = 0x247364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247360u;
    // 0x247364: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E380u, 0x247360u, 0x247368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247368u;
label_247368:
    // 0x247368: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
label_24736c:
    if (ctx->pc == 0x24736Cu) {
        ctx->pc = 0x24736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247368u;
        // 0x24736c: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247370u;
        goto label_247370;
    }
    ctx->pc = 0x247368u;
    {
        const bool branch_taken_0x247368 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x24736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247368u;
        // 0x24736c: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247368) {
            ctx->pc = 0x247360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247360;
        }
    }
    ctx->pc = 0x247370u;
label_247370:
    // 0x247370: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x247370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_247374:
    // 0x247374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247378:
    // 0x247378: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x247378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24737c:
    // 0x24737c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_247380:
    // 0x247380: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x247380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_247384:
    // 0x247384: 0x40f809  jalr        $v0
label_247388:
    if (ctx->pc == 0x247388u) {
        ctx->pc = 0x247388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247384u;
        // 0x247388: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24738Cu;
        goto label_24738c;
    }
    ctx->pc = 0x247384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24738Cu);
        ctx->pc = 0x247388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247384u;
        // 0x247388: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247384u, 0x24738Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24738Cu;
label_24738c:
    // 0x24738c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24738cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_247390:
    // 0x247390: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x247390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_247394:
    // 0x247394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x247394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247398:
    // 0x247398: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x247398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_24739c:
    // 0x24739c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2473a0:
    // 0x2473a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2473a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2473a4:
    // 0x2473a4: 0x40f809  jalr        $v0
label_2473a8:
    if (ctx->pc == 0x2473A8u) {
        ctx->pc = 0x2473A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473A4u;
        // 0x2473a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473ACu;
        goto label_2473ac;
    }
    ctx->pc = 0x2473A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2473ACu);
        ctx->pc = 0x2473A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473A4u;
        // 0x2473a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2473A4u, 0x2473ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2473ACu;
label_2473ac:
    // 0x2473ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2473acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2473b0:
    // 0x2473b0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2473b4:
    // 0x2473b4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2473b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2473b8:
    // 0x2473b8: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x2473b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_2473bc:
    // 0x2473bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2473bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2473c0:
    // 0x2473c0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x2473c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_2473c4:
    // 0x2473c4: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x2473c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_2473c8:
    // 0x2473c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2473c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2473cc:
    // 0x2473cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2473ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2473d0:
    // 0x2473d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2473d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2473d4:
    // 0x2473d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2473d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2473d8:
    // 0x2473d8: 0x3e00008  jr          $ra
label_2473dc:
    if (ctx->pc == 0x2473DCu) {
        ctx->pc = 0x2473DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473D8u;
        // 0x2473dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473E0u;
        goto label_fallthrough_0x2473d8;
    }
    ctx->pc = 0x2473D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2473DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473D8u;
        // 0x2473dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2473D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2473d8:
    ctx->pc = 0x2473E0u;
}
