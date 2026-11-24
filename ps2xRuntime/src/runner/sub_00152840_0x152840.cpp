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

// Function: sub_00152840
// Address: 0x152840 - 0x152a40
void sub_00152840_0x152840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152840_0x152840");
#endif

    switch (ctx->pc) {
        case 0x152878u: goto label_152878;
        case 0x15288cu: goto label_15288c;
        case 0x1528c8u: goto label_1528c8;
        case 0x1528ecu: goto label_1528ec;
        case 0x152940u: goto label_152940;
        case 0x15295cu: goto label_15295c;
        case 0x152970u: goto label_152970;
        case 0x152990u: goto label_152990;
        case 0x1529e8u: goto label_1529e8;
        case 0x152a04u: goto label_152a04;
        case 0x152a18u: goto label_152a18;
        case 0x152a20u: goto label_152a20;
        default: break;
    }

    ctx->pc = 0x152840u;

    // 0x152840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x152840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x152844: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x152844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x152848: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x152848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15284c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152850: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x152850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152854: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152858: 0x3c13007e  lui         $s3, 0x7E
    ctx->pc = 0x152858u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)126 << 16));
    // 0x15285c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152860: 0x3c12007e  lui         $s2, 0x7E
    ctx->pc = 0x152860u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)126 << 16));
    // 0x152864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15286c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15286cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152870: 0x267371b0  addiu       $s3, $s3, 0x71B0
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 29104));
    // 0x152874: 0x26527230  addiu       $s2, $s2, 0x7230
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29232));
label_152878:
    // 0x152878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15287c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152880: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x152880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152884: 0xc049590  jal         func_125640
    ctx->pc = 0x152884u;
    SET_GPR_U32(ctx, 31, 0x15288Cu);
    ctx->pc = 0x152888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152884u;
    // 0x152888: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x152884u, 0x15288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15288Cu;
label_15288c:
    // 0x15288c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15288cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x152890: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x152894: 0x2a820020  slti        $v0, $s4, 0x20
    ctx->pc = 0x152894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x152898: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x152898u;
    {
        const bool branch_taken_0x152898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152898u;
        // 0x15289c: 0x26520320  addiu       $s2, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152898) {
            ctx->pc = 0x152878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152878;
        }
    }
    ctx->pc = 0x1528A0u;
    // 0x1528a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1528a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1528a4: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1528a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1528a8: 0xac22f704  sw          $v0, -0x8FC($at)
    ctx->pc = 0x1528a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7EF704u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EF704u, _value); } while (0);
    // 0x1528ac: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1528acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1528b0: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1528b4: 0x2484f700  addiu       $a0, $a0, -0x900
    ctx->pc = 0x1528b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
    // 0x1528b8: 0xa3808574  sb          $zero, -0x7A8C($gp)
    ctx->pc = 0x1528b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935924), (uint8_t)GPR_U32(ctx, 0));
    // 0x1528bc: 0xa3808578  sb          $zero, -0x7A88($gp)
    ctx->pc = 0x1528bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935928), (uint8_t)GPR_U32(ctx, 0));
    // 0x1528c0: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1528C0u;
    SET_GPR_U32(ctx, 31, 0x1528C8u);
    ctx->pc = 0x1528C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528C0u;
    // 0x1528c4: 0xac20f708  sw          $zero, -0x8F8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1528C0u, 0x1528C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528C8u;
label_1528c8:
    // 0x1528c8: 0xaf828588  sw          $v0, -0x7A78($gp)
    ctx->pc = 0x1528c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 2));
    // 0x1528cc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1528d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1528d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1528d4: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1528d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1528d8: 0xac22f728  sw          $v0, -0x8D8($at)
    ctx->pc = 0x1528d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7EF728u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EF728u, _value); } while (0);
    // 0x1528dc: 0x2484f720  addiu       $a0, $a0, -0x8E0
    ctx->pc = 0x1528dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965024));
    // 0x1528e0: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1528e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1528e4: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1528E4u;
    SET_GPR_U32(ctx, 31, 0x1528ECu);
    ctx->pc = 0x1528E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528E4u;
    // 0x1528e8: 0xac22f724  sw          $v0, -0x8DC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1528E4u, 0x1528ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528ECu;
label_1528ec:
    // 0x1528ec: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1528ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1528f0: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1528f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1528f4: 0xac31e6b4  sw          $s1, -0x194C($at)
    ctx->pc = 0x1528f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x7EE6B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EE6B4u, _value); } while (0);
    // 0x1528f8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1528f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1528fc: 0x24632a40  addiu       $v1, $v1, 0x2A40
    ctx->pc = 0x1528fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10816));
    // 0x152900: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x152900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152904: 0xac23e6a4  sw          $v1, -0x195C($at)
    ctx->pc = 0x152904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7EE6A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EE6A4u, _value); } while (0);
    // 0x152908: 0x2484e6a0  addiu       $a0, $a0, -0x1960
    ctx->pc = 0x152908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960800));
    // 0x15290c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x15290cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x152910: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152914: 0x2463e700  addiu       $v1, $v1, -0x1900
    ctx->pc = 0x152914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960896));
    // 0x152918: 0xaf82858c  sw          $v0, -0x7A74($gp)
    ctx->pc = 0x152918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 2));
    // 0x15291c: 0xac23e6a8  sw          $v1, -0x1958($at)
    ctx->pc = 0x15291cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7EE6A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EE6A8u, _value); } while (0);
    // 0x152920: 0x27830000  addiu       $v1, $gp, 0x0
    ctx->pc = 0x152920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x152924: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x152924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152928: 0xac23e6b0  sw          $v1, -0x1950($at)
    ctx->pc = 0x152928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7EE6B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EE6B0u, _value); } while (0);
    // 0x15292c: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x15292cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152930: 0xac30e6ac  sw          $s0, -0x1954($at)
    ctx->pc = 0x152930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7EE6ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EE6ACu, _value); } while (0);
    // 0x152934: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x152934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152938: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x152938u;
    SET_GPR_U32(ctx, 31, 0x152940u);
    ctx->pc = 0x15293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152938u;
    // 0x15293c: 0xac20e6c0  sw          $zero, -0x1940($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960832), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x152938u, 0x152940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152940u;
label_152940:
    // 0x152940: 0xaf828584  sw          $v0, -0x7A7C($gp)
    ctx->pc = 0x152940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935940), GPR_U32(ctx, 2));
    // 0x152944: 0x8f848584  lw          $a0, -0x7A7C($gp)
    ctx->pc = 0x152944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935940)));
    // 0x152948: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152948u;
    {
        const bool branch_taken_0x152948 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x152948) {
            ctx->pc = 0x152968u;
            goto label_152968;
        }
    }
    ctx->pc = 0x152950u;
    // 0x152950: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152954: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152954u;
    SET_GPR_U32(ctx, 31, 0x15295Cu);
    ctx->pc = 0x152958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152954u;
    // 0x152958: 0x24844f10  addiu       $a0, $a0, 0x4F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152954u, 0x15295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15295Cu;
label_15295c:
    // 0x15295c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x15295Cu;
    {
        const bool branch_taken_0x15295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15295c) {
            ctx->pc = 0x152A20u;
            goto label_152a20;
        }
    }
    ctx->pc = 0x152964u;
    // 0x152964: 0x0  nop
    ctx->pc = 0x152964u;
    // NOP
label_152968:
    // 0x152968: 0xc043c48  jal         func_10F120
    ctx->pc = 0x152968u;
    SET_GPR_U32(ctx, 31, 0x152970u);
    ctx->pc = 0x15296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152968u;
    // 0x15296c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x152968u, 0x152970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152970u;
label_152970:
    // 0x152970: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x152970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152974: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x152978: 0xac200788  sw          $zero, 0x788($at)
    ctx->pc = 0x152978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0788u, _value); } while (0);
    // 0x15297c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152980: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x152980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152984: 0x24840780  addiu       $a0, $a0, 0x780
    ctx->pc = 0x152984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1920));
    // 0x152988: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x152988u;
    SET_GPR_U32(ctx, 31, 0x152990u);
    ctx->pc = 0x15298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152988u;
    // 0x15298c: 0xac220784  sw          $v0, 0x784($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1924), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x152988u, 0x152990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152990u;
label_152990:
    // 0x152990: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x152990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x152994: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x152994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x152998: 0xac30f74c  sw          $s0, -0x8B4($at)
    ctx->pc = 0x152998u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7EF74Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EF74Cu, _value); } while (0);
    // 0x15299c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x15299cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1529a0: 0x24632fa0  addiu       $v1, $v1, 0x2FA0
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12192));
    // 0x1529a4: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1529a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1529a8: 0xac23f744  sw          $v1, -0x8BC($at)
    ctx->pc = 0x1529a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7EF744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EF744u, _value); } while (0);
    // 0x1529ac: 0x2484f740  addiu       $a0, $a0, -0x8C0
    ctx->pc = 0x1529acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965056));
    // 0x1529b0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1529b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1529b4: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1529b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1529b8: 0x2463f780  addiu       $v1, $v1, -0x880
    ctx->pc = 0x1529b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965120));
    // 0x1529bc: 0xaf828594  sw          $v0, -0x7A6C($gp)
    ctx->pc = 0x1529bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935956), GPR_U32(ctx, 2));
    // 0x1529c0: 0xac23f748  sw          $v1, -0x8B8($at)
    ctx->pc = 0x1529c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7EF748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EF748u, _value); } while (0);
    // 0x1529c4: 0x27830000  addiu       $v1, $gp, 0x0
    ctx->pc = 0x1529c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x1529c8: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1529c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1529cc: 0xac23f750  sw          $v1, -0x8B0($at)
    ctx->pc = 0x1529ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7EF750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EF750u, _value); } while (0);
    // 0x1529d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1529d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1529d4: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1529d8: 0xac23f754  sw          $v1, -0x8AC($at)
    ctx->pc = 0x1529d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7EF754u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EF754u, _value); } while (0);
    // 0x1529dc: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x1529dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x1529e0: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x1529E0u;
    SET_GPR_U32(ctx, 31, 0x1529E8u);
    ctx->pc = 0x1529E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529E0u;
    // 0x1529e4: 0xac20f760  sw          $zero, -0x8A0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x1529E0u, 0x1529E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529E8u;
label_1529e8:
    // 0x1529e8: 0xaf828590  sw          $v0, -0x7A70($gp)
    ctx->pc = 0x1529e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    // 0x1529ec: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1529ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1529f0: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1529F0u;
    {
        const bool branch_taken_0x1529f0 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1529f0) {
            ctx->pc = 0x152A10u;
            goto label_152a10;
        }
    }
    ctx->pc = 0x1529F8u;
    // 0x1529f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1529fc: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x1529FCu;
    SET_GPR_U32(ctx, 31, 0x152A04u);
    ctx->pc = 0x152A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529FCu;
    // 0x152a00: 0x24844f10  addiu       $a0, $a0, 0x4F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x1529FCu, 0x152A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A04u;
label_152a04:
    // 0x152a04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152A04u;
    {
        const bool branch_taken_0x152a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a04) {
            ctx->pc = 0x152A20u;
            goto label_152a20;
        }
    }
    ctx->pc = 0x152A0Cu;
    // 0x152a0c: 0x0  nop
    ctx->pc = 0x152a0cu;
    // NOP
label_152a10:
    // 0x152a10: 0xc043c48  jal         func_10F120
    ctx->pc = 0x152A10u;
    SET_GPR_U32(ctx, 31, 0x152A18u);
    ctx->pc = 0x152A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A10u;
    // 0x152a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x152A10u, 0x152A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A18u;
label_152a18:
    // 0x152a18: 0xc0437d4  jal         func_10DF50
    ctx->pc = 0x152A18u;
    SET_GPR_U32(ctx, 31, 0x152A20u);
    ctx->pc = 0x152A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A18u;
    // 0x152a1c: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF50u, 0x152A18u, 0x152A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A20u;
label_152a20:
    // 0x152a20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x152a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152a24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152a28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152a28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152a38: 0x3e00008  jr          $ra
    ctx->pc = 0x152A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A38u;
        // 0x152a3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152A40u;
}
