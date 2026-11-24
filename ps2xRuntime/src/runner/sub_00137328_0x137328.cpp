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

// Function: sub_00137328
// Address: 0x137328 - 0x137400
void sub_00137328_0x137328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137328_0x137328");
#endif

    switch (ctx->pc) {
        case 0x137388u: goto label_137388;
        case 0x1373d8u: goto label_1373d8;
        case 0x1373ecu: goto label_1373ec;
        default: break;
    }

    ctx->pc = 0x137328u;

    // 0x137328: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x137328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13732c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137330: 0x8c43aa00  lw          $v1, -0x5600($v0)
    ctx->pc = 0x137330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40AA00u));
    // 0x137334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137338: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13733c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x13733Cu;
    {
        const bool branch_taken_0x13733c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13733Cu;
        // 0x137340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13733c) {
            ctx->pc = 0x1373F0u;
            goto label_1373f0;
        }
    }
    ctx->pc = 0x137344u;
    // 0x137344: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x137344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137348: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x137348u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x13734c: 0x24f04340  addiu       $s0, $a3, 0x4340
    ctx->pc = 0x13734cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 17216));
    // 0x137350: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x137354: 0xace24340  sw          $v0, 0x4340($a3)
    ctx->pc = 0x137354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4340u, _value); } while (0);
    // 0x137358: 0x26090014  addiu       $t1, $s0, 0x14
    ctx->pc = 0x137358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13735c: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x13735cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B4368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4368u, _value); } while (0);
    // 0x137360: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x137364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137368: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x137368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B436Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B436Cu, _value); } while (0);
    // 0x13736c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x13736cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B4344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4344u, _value); } while (0);
    // 0x137370: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x137374: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x137374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4348u, _value); } while (0);
    // 0x137378: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13737c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13737cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B434Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B434Cu, _value); } while (0);
    // 0x137380: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x137380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x137384: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x137384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4350u, _value); } while (0);
label_137388:
    // 0x137388: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x137388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x13738c: 0x1252021  addu        $a0, $t1, $a1
    ctx->pc = 0x13738cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x137390: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137394: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137398: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x137398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x13739c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x13739cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1373a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1373A0u;
    {
        const bool branch_taken_0x1373a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1373a0) {
            ctx->pc = 0x137388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137388;
        }
    }
    ctx->pc = 0x1373A8u;
    // 0x1373a8: 0x24e74340  addiu       $a3, $a3, 0x4340
    ctx->pc = 0x1373a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17216));
    // 0x1373ac: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1373acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1373b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1373b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1373b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1373b8: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x1373b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x1373bc: 0x34a51301  ori         $a1, $a1, 0x1301
    ctx->pc = 0x1373bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4865);
    // 0x1373c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1373c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373c4: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1373c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1373c8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1373c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373cc: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1373ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1373d0: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1373D0u;
    SET_GPR_U32(ctx, 31, 0x1373D8u);
    ctx->pc = 0x1373D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373D0u;
    // 0x1373d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1373D0u, 0x1373D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373D8u;
label_1373d8:
    // 0x1373d8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1373D8u;
    {
        const bool branch_taken_0x1373d8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1373d8) {
            ctx->pc = 0x1373DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1373D8u;
            // 0x1373dc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1373F0u;
            goto label_1373f0;
        }
    }
    ctx->pc = 0x1373E0u;
    // 0x1373e0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1373e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1373e4: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x1373E4u;
    SET_GPR_U32(ctx, 31, 0x1373ECu);
    ctx->pc = 0x1373E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373E4u;
    // 0x1373e8: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x1373E4u, 0x1373ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373ECu;
label_1373ec:
    // 0x1373ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1373ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1373f0:
    // 0x1373f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1373f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1373f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1373f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1373f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1373F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1373FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373F8u;
        // 0x1373fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1373F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137400u;
}
