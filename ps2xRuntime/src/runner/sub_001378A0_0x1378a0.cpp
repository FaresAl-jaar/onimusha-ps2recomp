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

// Function: sub_001378A0
// Address: 0x1378a0 - 0x1379e8
void sub_001378A0_0x1378a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001378A0_0x1378a0");
#endif

    switch (ctx->pc) {
        case 0x137900u: goto label_137900;
        case 0x137958u: goto label_137958;
        case 0x13796cu: goto label_13796c;
        case 0x1379a0u: goto label_1379a0;
        default: break;
    }

    ctx->pc = 0x1378a0u;

    // 0x1378a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1378a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1378a4: 0x3c0a006b  lui         $t2, 0x6B
    ctx->pc = 0x1378a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)107 << 16));
    // 0x1378a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1378a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1378ac: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1378acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1378b0: 0x25504340  addiu       $s0, $t2, 0x4340
    ctx->pc = 0x1378b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 17216));
    // 0x1378b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1378b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1378b8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1378b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378bc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1378bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1378c0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1378c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1378c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1378c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1378c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378cc: 0xad444340  sw          $a0, 0x4340($t2)
    ctx->pc = 0x1378ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B4340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4340u, _value); } while (0);
    // 0x1378d0: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1378d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B4344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4344u, _value); } while (0);
    // 0x1378d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1378d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1378d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1378d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4348u, _value); } while (0);
    // 0x1378dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1378dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1378e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1378e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B434Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B434Cu, _value); } while (0);
    // 0x1378e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1378e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1378e8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1378E8u;
    {
        const bool branch_taken_0x1378e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1378ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378E8u;
        // 0x1378ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378e8) {
            ctx->pc = 0x137928u;
            goto label_137928;
        }
    }
    ctx->pc = 0x1378F0u;
    // 0x1378f0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1378f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1378f4: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x1378f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x1378f8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1378f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1378fc: 0x0  nop
    ctx->pc = 0x1378fcu;
    // NOP
label_137900:
    // 0x137900: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x137900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x137904: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137908: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13790c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x13790cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x137910: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x137910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137914: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x137914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137918: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137918u;
    {
        const bool branch_taken_0x137918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137918u;
        // 0x13791c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137918) {
            ctx->pc = 0x137900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137900;
        }
    }
    ctx->pc = 0x137920u;
    // 0x137920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137920u;
    {
        const bool branch_taken_0x137920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137920u;
        // 0x137924: 0x25474340  addiu       $a3, $t2, 0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 17216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137920) {
            ctx->pc = 0x137930u;
            goto label_137930;
        }
    }
    ctx->pc = 0x137928u;
label_137928:
    // 0x137928: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x137928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x13792c: 0x25474340  addiu       $a3, $t2, 0x4340
    ctx->pc = 0x13792cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 17216));
label_137930:
    // 0x137930: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x137930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x137934: 0x25044248  addiu       $a0, $t0, 0x4248
    ctx->pc = 0x137934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16968));
    // 0x137938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x137938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x13793c: 0x34a51318  ori         $a1, $a1, 0x1318
    ctx->pc = 0x13793cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4888);
    // 0x137940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137944: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x137944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137948: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x137948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13794c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x13794cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137950: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137950u;
    SET_GPR_U32(ctx, 31, 0x137958u);
    ctx->pc = 0x137954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137950u;
    // 0x137954: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137950u, 0x137958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137958u;
label_137958:
    // 0x137958: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137958u;
    {
        const bool branch_taken_0x137958 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x137958) {
            ctx->pc = 0x13795Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137958u;
            // 0x13795c: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137974u;
            goto label_137974;
        }
    }
    ctx->pc = 0x137960u;
    // 0x137960: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137964: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137964u;
    SET_GPR_U32(ctx, 31, 0x13796Cu);
    ctx->pc = 0x137968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137964u;
    // 0x137968: 0x248447c8  addiu       $a0, $a0, 0x47C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137964u, 0x13796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13796Cu;
label_13796c:
    // 0x13796c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13796Cu;
    {
        const bool branch_taken_0x13796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13796Cu;
        // 0x137970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13796c) {
            ctx->pc = 0x1379CCu;
            goto label_1379cc;
        }
    }
    ctx->pc = 0x137974u;
label_137974:
    // 0x137974: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x137974u;
    {
        const bool branch_taken_0x137974 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x137978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137974u;
        // 0x137978: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137974) {
            ctx->pc = 0x1379D0u;
            goto label_1379d0;
        }
    }
    ctx->pc = 0x13797Cu;
    // 0x13797c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137980: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x137980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x137984: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x137988: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x137988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x13798c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x137990: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x137990u;
    {
        const bool branch_taken_0x137990 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x137994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137990u;
        // 0x137994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137990) {
            ctx->pc = 0x1379C8u;
            goto label_1379c8;
        }
    }
    ctx->pc = 0x137998u;
    // 0x137998: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x137998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x13799c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x13799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1379a0:
    // 0x1379a0: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x1379a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1379a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1379a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1379a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1379a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1379ac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1379acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1379b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1379b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1379b4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1379b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1379b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1379B8u;
    {
        const bool branch_taken_0x1379b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1379BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379B8u;
        // 0x1379bc: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379b8) {
            ctx->pc = 0x1379A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1379a0;
        }
    }
    ctx->pc = 0x1379C0u;
    // 0x1379c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1379C0u;
    {
        const bool branch_taken_0x1379c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1379C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379C0u;
        // 0x1379c4: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379c0) {
            ctx->pc = 0x1379CCu;
            goto label_1379cc;
        }
    }
    ctx->pc = 0x1379C8u;
label_1379c8:
    // 0x1379c8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1379c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1379cc:
    // 0x1379cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1379ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1379d0:
    // 0x1379d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1379d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1379d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1379d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1379d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1379d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1379dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1379dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1379e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1379E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1379E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379E0u;
        // 0x1379e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1379E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1379E8u;
}
