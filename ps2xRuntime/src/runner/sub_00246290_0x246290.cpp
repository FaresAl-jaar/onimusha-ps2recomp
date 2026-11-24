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

// Function: sub_00246290
// Address: 0x246290 - 0x24645c
void sub_00246290_0x246290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246290_0x246290");
#endif

    switch (ctx->pc) {
        case 0x2462e8u: goto label_2462e8;
        case 0x246328u: goto label_246328;
        case 0x24633cu: goto label_24633c;
        case 0x246348u: goto label_246348;
        case 0x246368u: goto label_246368;
        case 0x246378u: goto label_246378;
        case 0x246384u: goto label_246384;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463f4u: goto label_2463f4;
        case 0x246404u: goto label_246404;
        case 0x246420u: goto label_246420;
        default: break;
    }

    ctx->pc = 0x246290u;

    // 0x246290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246298: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x246298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24629c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24629cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2462a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2462a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2462a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2462a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2462a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2462a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2462ac: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2462ACu;
    {
        const bool branch_taken_0x2462ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2462B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462ACu;
        // 0x2462b0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462ac) {
            ctx->pc = 0x24630Cu;
            goto label_24630c;
        }
    }
    ctx->pc = 0x2462B4u;
    // 0x2462b4: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x2462b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2462b8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2462b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2462bc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2462BCu;
    {
        const bool branch_taken_0x2462bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2462bc) {
            ctx->pc = 0x2462C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2462BCu;
            // 0x2462c0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24630Cu;
            goto label_24630c;
        }
    }
    ctx->pc = 0x2462C4u;
    // 0x2462c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2462c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2462c8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2462c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2462cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2462ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2462d0: 0x8c63c9b0  lw          $v1, -0x3650($v1)
    ctx->pc = 0x2462d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953392)));
    // 0x2462d4: 0x600008  jr          $v1
    ctx->pc = 0x2462D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2462E0u: goto label_2462e0;
            case 0x246300u: goto label_246300;
            case 0x246308u: goto label_246308;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2462D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2462DCu;
    // 0x2462dc: 0x0  nop
    ctx->pc = 0x2462dcu;
    // NOP
label_2462e0:
    // 0x2462e0: 0xc09170e  jal         func_245C38
    ctx->pc = 0x2462E0u;
    SET_GPR_U32(ctx, 31, 0x2462E8u);
    ctx->pc = 0x2462E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462E0u;
    // 0x2462e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C38u, 0x2462E0u, 0x2462E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462E8u;
label_2462e8:
    // 0x2462e8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x2462e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2462ec: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x2462ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x2462f0: 0x2463e9dc  addiu       $v1, $v1, -0x1624
    ctx->pc = 0x2462f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961628));
    // 0x2462f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2462f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9DCu));
    // 0x2462f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2462f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2462fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2462fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9DCu, _value); } while (0);
label_246300:
    // 0x246300: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x246300u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x246304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x246304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246308:
    // 0x246308: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x246308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_24630c:
    // 0x24630c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x24630cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x246310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246314: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x246314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x246318: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x246318u;
    {
        const bool branch_taken_0x246318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x246318) {
            ctx->pc = 0x24631Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246318u;
            // 0x24631c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2463CCu;
            goto label_2463cc;
        }
    }
    ctx->pc = 0x246320u;
    // 0x246320: 0xc091a44  jal         func_246910
    ctx->pc = 0x246320u;
    SET_GPR_U32(ctx, 31, 0x246328u);
    ctx->pc = 0x246324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246320u;
    // 0x246324: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246320u, 0x246328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246328u;
label_246328:
    // 0x246328: 0xde250028  ld          $a1, 0x28($s1)
    ctx->pc = 0x246328u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x24632c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x246330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246334: 0xc091abc  jal         func_246AF0
    ctx->pc = 0x246334u;
    SET_GPR_U32(ctx, 31, 0x24633Cu);
    ctx->pc = 0x246338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246334u;
    // 0x246338: 0x52af8  dsll        $a1, $a1, 11 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF0u, 0x246334u, 0x24633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24633Cu;
label_24633c:
    // 0x24633c: 0x24042001  addiu       $a0, $zero, 0x2001
    ctx->pc = 0x24633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x246340: 0xc091a44  jal         func_246910
    ctx->pc = 0x246340u;
    SET_GPR_U32(ctx, 31, 0x246348u);
    ctx->pc = 0x246344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246340u;
    // 0x246344: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246340u, 0x246348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246348u;
label_246348:
    // 0x246348: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246348u;
    {
        const bool branch_taken_0x246348 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x24634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246348u;
        // 0x24634c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246348) {
            ctx->pc = 0x246360u;
            goto label_246360;
        }
    }
    ctx->pc = 0x246350u;
    // 0x246350: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x246350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x246354: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x246354u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x246358: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x246358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x24635c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x24635cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_246360:
    // 0x246360: 0xc091a44  jal         func_246910
    ctx->pc = 0x246360u;
    SET_GPR_U32(ctx, 31, 0x246368u);
    ctx->pc = 0x246364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246360u;
    // 0x246364: 0x24042100  addiu       $a0, $zero, 0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246360u, 0x246368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246368u;
label_246368:
    // 0x246368: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x246368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x24636c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x24636cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x246370: 0xc091b38  jal         func_246CE0
    ctx->pc = 0x246370u;
    SET_GPR_U32(ctx, 31, 0x246378u);
    ctx->pc = 0x246374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246370u;
    // 0x246374: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246CE0u, 0x246370u, 0x246378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246378u;
label_246378:
    // 0x246378: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x246378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x24637c: 0xc091a44  jal         func_246910
    ctx->pc = 0x24637Cu;
    SET_GPR_U32(ctx, 31, 0x246384u);
    ctx->pc = 0x246380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24637Cu;
    // 0x246380: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24637Cu, 0x246384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246384u;
label_246384:
    // 0x246384: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x246384u;
    {
        const bool branch_taken_0x246384 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x246388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246384u;
        // 0x246388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246384) {
            ctx->pc = 0x2463B0u;
            goto label_2463b0;
        }
    }
    ctx->pc = 0x24638Cu;
    // 0x24638c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24638cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x246390: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x246390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x246394: 0x2463e9d8  addiu       $v1, $v1, -0x1628
    ctx->pc = 0x246394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961624));
    // 0x246398: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x246398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24639c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24639cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9D8u));
    // 0x2463a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2463a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2463a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2463a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9D8u, _value); } while (0);
    // 0x2463a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2463A8u;
    {
        const bool branch_taken_0x2463a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463A8u;
        // 0x2463ac: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463a8) {
            ctx->pc = 0x2463CCu;
            goto label_2463cc;
        }
    }
    ctx->pc = 0x2463B0u;
label_2463b0:
    // 0x2463b0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x2463b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2463b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2463b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2463b8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2463b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2463bc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2463bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2463c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2463c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2463c4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2463c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2463c8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2463cc:
    // 0x2463cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2463d0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2463d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2463d4: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2463D4u;
    {
        const bool branch_taken_0x2463d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2463D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D4u;
        // 0x2463d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463d4) {
            ctx->pc = 0x24644Cu;
            goto label_24644c;
        }
    }
    ctx->pc = 0x2463DCu;
    // 0x2463dc: 0xc091a44  jal         func_246910
    ctx->pc = 0x2463DCu;
    SET_GPR_U32(ctx, 31, 0x2463E4u);
    ctx->pc = 0x2463E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463DCu;
    // 0x2463e0: 0x24042200  addiu       $a0, $zero, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2463DCu, 0x2463E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463E4u;
label_2463e4:
    // 0x2463e4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2463e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2463e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2463e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2463ec: 0xc091aea  jal         func_246BA8
    ctx->pc = 0x2463ECu;
    SET_GPR_U32(ctx, 31, 0x2463F4u);
    ctx->pc = 0x2463F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463ECu;
    // 0x2463f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246BA8u, 0x2463ECu, 0x2463F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463F4u;
label_2463f4:
    // 0x2463f4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2463F4u;
    {
        const bool branch_taken_0x2463f4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2463f4) {
            ctx->pc = 0x246418u;
            goto label_246418;
        }
    }
    ctx->pc = 0x2463FCu;
    // 0x2463fc: 0xc091a44  jal         func_246910
    ctx->pc = 0x2463FCu;
    SET_GPR_U32(ctx, 31, 0x246404u);
    ctx->pc = 0x246400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463FCu;
    // 0x246400: 0x24042201  addiu       $a0, $zero, 0x2201 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8705));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2463FCu, 0x246404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246404u;
label_246404:
    // 0x246404: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x246404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x246408: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x246408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24640c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x24640cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x246410: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x246410u;
    {
        const bool branch_taken_0x246410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246410u;
        // 0x246414: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246410) {
            ctx->pc = 0x246448u;
            goto label_246448;
        }
    }
    ctx->pc = 0x246418u;
label_246418:
    // 0x246418: 0xc091a44  jal         func_246910
    ctx->pc = 0x246418u;
    SET_GPR_U32(ctx, 31, 0x246420u);
    ctx->pc = 0x24641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246418u;
    // 0x24641c: 0x24042202  addiu       $a0, $zero, 0x2202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8706));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246418u, 0x246420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246420u;
label_246420:
    // 0x246420: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x246420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246424: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x246424u;
    {
        const bool branch_taken_0x246424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246424u;
        // 0x246428: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246424) {
            ctx->pc = 0x24644Cu;
            goto label_24644c;
        }
    }
    ctx->pc = 0x24642Cu;
    // 0x24642c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246430: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x246434: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x246434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x246438: 0x2463e9dc  addiu       $v1, $v1, -0x1624
    ctx->pc = 0x246438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961628));
    // 0x24643c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24643cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9DCu));
    // 0x246440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246444: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x246444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9DCu, _value); } while (0);
label_246448:
    // 0x246448: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x246448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24644c:
    // 0x24644c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24644cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x246450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x246450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246454: 0x3e00008  jr          $ra
    ctx->pc = 0x246454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246454u;
        // 0x246458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24645Cu;
}
