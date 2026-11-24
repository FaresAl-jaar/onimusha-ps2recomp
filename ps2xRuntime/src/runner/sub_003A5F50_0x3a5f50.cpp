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

// Function: sub_003A5F50
// Address: 0x3a5f50 - 0x3a6340
void sub_003A5F50_0x3a5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5F50_0x3a5f50");
#endif

    switch (ctx->pc) {
        case 0x3a5fc4u: goto label_3a5fc4;
        case 0x3a5fdcu: goto label_3a5fdc;
        case 0x3a5ffcu: goto label_3a5ffc;
        case 0x3a602cu: goto label_3a602c;
        case 0x3a6098u: goto label_3a6098;
        case 0x3a60acu: goto label_3a60ac;
        case 0x3a60b8u: goto label_3a60b8;
        case 0x3a6100u: goto label_3a6100;
        case 0x3a6128u: goto label_3a6128;
        case 0x3a6170u: goto label_3a6170;
        case 0x3a61f0u: goto label_3a61f0;
        case 0x3a6244u: goto label_3a6244;
        case 0x3a6250u: goto label_3a6250;
        case 0x3a6264u: goto label_3a6264;
        case 0x3a6298u: goto label_3a6298;
        case 0x3a6300u: goto label_3a6300;
        case 0x3a630cu: goto label_3a630c;
        case 0x3a6324u: goto label_3a6324;
        default: break;
    }

    ctx->pc = 0x3a5f50u;

    // 0x3a5f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5f54: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3a5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3a5f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a5f5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a5f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a5f60: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a5f60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a5f64: 0x10a300ec  beq         $a1, $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x3A5F64u;
    {
        const bool branch_taken_0x3a5f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F64u;
        // 0x3a5f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f64) {
            ctx->pc = 0x3A6318u;
            goto label_3a6318;
        }
    }
    ctx->pc = 0x3A5F6Cu;
    // 0x3a5f6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a5f70: 0x10a30089  beq         $a1, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3A5F70u;
    {
        const bool branch_taken_0x3a5f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F70u;
        // 0x3a5f74: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f70) {
            ctx->pc = 0x3A6198u;
            goto label_3a6198;
        }
    }
    ctx->pc = 0x3A5F78u;
    // 0x3a5f78: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A5F78u;
    {
        const bool branch_taken_0x3a5f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a5f78) {
            ctx->pc = 0x3A6068u;
            goto label_3a6068;
        }
    }
    ctx->pc = 0x3A5F80u;
    // 0x3a5f80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a5f84: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A5F84u;
    {
        const bool branch_taken_0x3a5f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F84u;
        // 0x3a5f88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f84) {
            ctx->pc = 0x3A6018u;
            goto label_3a6018;
        }
    }
    ctx->pc = 0x3A5F8Cu;
    // 0x3a5f8c: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A5F8Cu;
    {
        const bool branch_taken_0x3a5f8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a5f8c) {
            ctx->pc = 0x3A5FE8u;
            goto label_3a5fe8;
        }
    }
    ctx->pc = 0x3A5F94u;
    // 0x3a5f94: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5F94u;
    {
        const bool branch_taken_0x3a5f94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5f94) {
            ctx->pc = 0x3A5FA8u;
            goto label_3a5fa8;
        }
    }
    ctx->pc = 0x3A5F9Cu;
    // 0x3a5f9c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x3A5F9Cu;
    {
        const bool branch_taken_0x3a5f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5f9c) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A5FA4u;
    // 0x3a5fa4: 0x0  nop
    ctx->pc = 0x3a5fa4u;
    // NOP
label_3a5fa8:
    // 0x3a5fa8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5fac: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a5facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5fb0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a5fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a5fb4: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x3a5fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5fb8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a5fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a5fbc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A5FBCu;
    SET_GPR_U32(ctx, 31, 0x3A5FC4u);
    ctx->pc = 0x3A5FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5FBCu;
    // 0x3a5fc0: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A5FBCu, 0x3A5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5FC4u;
label_3a5fc4:
    // 0x3a5fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5fc8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x3a5fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3a5fcc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a5fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a5fd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5fd4: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A5FD4u;
    SET_GPR_U32(ctx, 31, 0x3A5FDCu);
    ctx->pc = 0x3A5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5FD4u;
    // 0x3a5fd8: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A5FD4u, 0x3A5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5FDCu;
label_3a5fdc:
    // 0x3a5fdc: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3A5FDCu;
    {
        const bool branch_taken_0x3a5fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5fdc) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A5FE4u;
    // 0x3a5fe4: 0x0  nop
    ctx->pc = 0x3a5fe4u;
    // NOP
label_3a5fe8:
    // 0x3a5fe8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a5fec: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a5fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a5ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ff4: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A5FF4u;
    SET_GPR_U32(ctx, 31, 0x3A5FFCu);
    ctx->pc = 0x3A5FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5FF4u;
    // 0x3a5ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A5FF4u, 0x3A5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5FFCu;
label_3a5ffc:
    // 0x3a5ffc: 0x1c4000cc  bgtz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x3A5FFCu;
    {
        const bool branch_taken_0x3a5ffc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a5ffc) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6004u;
    // 0x3a6004: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a6004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a6008: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a600c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3A600Cu;
    {
        const bool branch_taken_0x3a600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A600Cu;
        // 0x3a6010: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a600c) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6014u;
    // 0x3a6014: 0x0  nop
    ctx->pc = 0x3a6014u;
    // NOP
label_3a6018:
    // 0x3a6018: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a6018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a601c: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a6020: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a6020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6024: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A6024u;
    SET_GPR_U32(ctx, 31, 0x3A602Cu);
    ctx->pc = 0x3A6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6024u;
    // 0x3a6028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A6024u, 0x3A602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A602Cu;
label_3a602c:
    // 0x3a602c: 0x1c4000c0  bgtz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x3A602Cu;
    {
        const bool branch_taken_0x3a602c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a602c) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6034u;
    // 0x3a6034: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3a6034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a6038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a6038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a603c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A603Cu;
    {
        const bool branch_taken_0x3a603c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A603Cu;
        // 0x3a6040: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a603c) {
            ctx->pc = 0x3A6058u;
            goto label_3a6058;
        }
    }
    ctx->pc = 0x3A6044u;
    // 0x3a6044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a6044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6048: 0x8c248eac  lw          $a0, -0x7154($at)
    ctx->pc = 0x3a6048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938284)));
    // 0x3a604c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A604Cu;
    {
        const bool branch_taken_0x3a604c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a604c) {
            ctx->pc = 0x3A6058u;
            goto label_3a6058;
        }
    }
    ctx->pc = 0x3A6054u;
    // 0x3a6054: 0xa2050007  sb          $a1, 0x7($s0)
    ctx->pc = 0x3a6054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 5));
label_3a6058:
    // 0x3a6058: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a6058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a605c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6060: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x3A6060u;
    {
        const bool branch_taken_0x3a6060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6060u;
        // 0x3a6064: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6060) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6068u;
label_3a6068:
    // 0x3a6068: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x3a6068u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x3a606c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6070: 0x148300af  bne         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x3A6070u;
    {
        const bool branch_taken_0x3a6070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a6070) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6078u;
    // 0x3a6078: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a6078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a607c: 0x146000ac  bnez        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x3A607Cu;
    {
        const bool branch_taken_0x3a607c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a607c) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6084u;
    // 0x3a6084: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a6084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a6088: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a6088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a608c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a6090: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A6090u;
    SET_GPR_U32(ctx, 31, 0x3A6098u);
    ctx->pc = 0x3A6094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6090u;
    // 0x3a6094: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A6090u, 0x3A6098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6098u;
label_3a6098:
    // 0x3a6098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a609c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3a609cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3a60a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a60a4: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A60A4u;
    SET_GPR_U32(ctx, 31, 0x3A60ACu);
    ctx->pc = 0x3A60A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A60A4u;
    // 0x3a60a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A60A4u, 0x3A60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A60ACu;
label_3a60ac:
    // 0x3a60ac: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x3a60acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x3a60b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a60b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a60b4: 0x0  nop
    ctx->pc = 0x3a60b4u;
    // NOP
label_3a60b8:
    // 0x3a60b8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a60b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60bc: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a60bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60c0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a60c4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a60c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a60c8: 0x2ca30328  sltiu       $v1, $a1, 0x328
    ctx->pc = 0x3a60c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a60cc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a60ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60d0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a60d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60d4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a60d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a60d8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a60d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60dc: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a60dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60e0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a60e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a60e4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a60e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60e8: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a60e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a60ec: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A60ECu;
    {
        const bool branch_taken_0x3a60ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60ECu;
        // 0x3a60f0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60ec) {
            ctx->pc = 0x3A60B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a60b8;
        }
    }
    ctx->pc = 0x3A60F4u;
    // 0x3a60f4: 0x2ca10330  sltiu       $at, $a1, 0x330
    ctx->pc = 0x3a60f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a60f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A60F8u;
    {
        const bool branch_taken_0x3a60f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a60f8) {
            ctx->pc = 0x3A6120u;
            goto label_3a6120;
        }
    }
    ctx->pc = 0x3A6100u;
label_3a6100:
    // 0x3a6100: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a6100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a6104: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a6104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6108: 0x2ca30330  sltiu       $v1, $a1, 0x330
    ctx->pc = 0x3a6108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a610c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a6110: 0x0  nop
    ctx->pc = 0x3a6110u;
    // NOP
    // 0x3a6114: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A6114u;
    {
        const bool branch_taken_0x3a6114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6114) {
            ctx->pc = 0x3A6100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6100;
        }
    }
    ctx->pc = 0x3A611Cu;
    // 0x3a611c: 0x0  nop
    ctx->pc = 0x3a611cu;
    // NOP
label_3a6120:
    // 0x3a6120: 0x260404c0  addiu       $a0, $s0, 0x4C0
    ctx->pc = 0x3a6120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x3a6124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a6124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6128:
    // 0x3a6128: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a6128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a612c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a612cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6130: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a6130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a6134: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a6134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a6138: 0x2ca30328  sltiu       $v1, $a1, 0x328
    ctx->pc = 0x3a6138u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a613c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a613cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6140: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a6140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6144: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a6148: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a6148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a614c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a614cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6150: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a6150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a6154: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a6154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6158: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a6158u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a615c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A615Cu;
    {
        const bool branch_taken_0x3a615c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A615Cu;
        // 0x3a6160: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a615c) {
            ctx->pc = 0x3A6128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6128;
        }
    }
    ctx->pc = 0x3A6164u;
    // 0x3a6164: 0x2ca10330  sltiu       $at, $a1, 0x330
    ctx->pc = 0x3a6164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a6168: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x3A6168u;
    {
        const bool branch_taken_0x3a6168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6168) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6170u;
label_3a6170:
    // 0x3a6170: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a6170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a6174: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a6174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6178: 0x2ca30330  sltiu       $v1, $a1, 0x330
    ctx->pc = 0x3a6178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a617c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a6180: 0x0  nop
    ctx->pc = 0x3a6180u;
    // NOP
    // 0x3a6184: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A6184u;
    {
        const bool branch_taken_0x3a6184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6184) {
            ctx->pc = 0x3A6170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6170;
        }
    }
    ctx->pc = 0x3A618Cu;
    // 0x3a618c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3A618Cu;
    {
        const bool branch_taken_0x3a618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a618c) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6194u;
    // 0x3a6194: 0x0  nop
    ctx->pc = 0x3a6194u;
    // NOP
label_3a6198:
    // 0x3a6198: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3a6198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a619c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3a619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3a61a0: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x3a61a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x3a61a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a61a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a61a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A61A8u;
    {
        const bool branch_taken_0x3a61a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a61a8) {
            ctx->pc = 0x3A61F0u;
            goto label_3a61f0;
        }
    }
    ctx->pc = 0x3A61B0u;
    // 0x3a61b0: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a61b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a61b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a61b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a61bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a61c0: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3a61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3a61c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a61c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a61c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a61ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a61d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a61d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a61d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61dc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3a61dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3a61e0: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x3a61e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a61e4: 0xa2000053  sb          $zero, 0x53($s0)
    ctx->pc = 0x3a61e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a61e8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A61E8u;
    SET_GPR_U32(ctx, 31, 0x3A61F0u);
    ctx->pc = 0x3A61ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A61E8u;
    // 0x3a61ec: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A61E8u, 0x3A61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A61F0u;
label_3a61f0:
    // 0x3a61f0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3a61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a61f4: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3a61f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3a61f8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A61F8u;
    {
        const bool branch_taken_0x3a61f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a61f8) {
            ctx->pc = 0x3A62A0u;
            goto label_3a62a0;
        }
    }
    ctx->pc = 0x3A6200u;
    // 0x3a6200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6204: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a6204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a6208: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3a6208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a620c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a620cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a6210: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a6210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6214: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3a6214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3a6218: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x3a6218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a621c: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x3a621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x3a6220: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x3a6220u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a6224: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a6224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a6228: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a6228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a622c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a622cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a6230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a6230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a6234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a6234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a6238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a623c: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3A623Cu;
    SET_GPR_U32(ctx, 31, 0x3A6244u);
    ctx->pc = 0x3A6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A623Cu;
    // 0x3a6240: 0x24440238  addiu       $a0, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3A623Cu, 0x3A6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6244u;
label_3a6244:
    // 0x3a6244: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a6244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a6248: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A6248u;
    SET_GPR_U32(ctx, 31, 0x3A6250u);
    ctx->pc = 0x3A624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6248u;
    // 0x3a624c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A6248u, 0x3A6250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6250u;
label_3a6250:
    // 0x3a6250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6254: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3a6254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3a6258: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3a6258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a625c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A625Cu;
    SET_GPR_U32(ctx, 31, 0x3A6264u);
    ctx->pc = 0x3A6260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A625Cu;
    // 0x3a6260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A625Cu, 0x3A6264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6264u;
label_3a6264:
    // 0x3a6264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6268: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a626c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a6270: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a6274: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3a6274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3a6278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a627c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a627cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a6280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a6284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6288: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a6288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a628c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a628cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6290: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A6290u;
    SET_GPR_U32(ctx, 31, 0x3A6298u);
    ctx->pc = 0x3A6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6290u;
    // 0x3a6294: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A6290u, 0x3A6298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6298u;
label_3a6298:
    // 0x3a6298: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3A6298u;
    {
        const bool branch_taken_0x3a6298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6298) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A62A0u;
label_3a62a0:
    // 0x3a62a0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3a62a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3a62a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A62A4u;
    {
        const bool branch_taken_0x3a62a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a62a4) {
            ctx->pc = 0x3A6300u;
            goto label_3a6300;
        }
    }
    ctx->pc = 0x3A62ACu;
    // 0x3a62ac: 0x920d0000  lbu         $t5, 0x0($s0)
    ctx->pc = 0x3a62acu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a62b0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a62b4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a62b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a62b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a62bc: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x3a62bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a62c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a62c4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a62c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a62c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a62ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a62d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a62d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a62d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62dc: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x3a62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3a62e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a62e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62e4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a62e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a62e8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a62e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a62ec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a62ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a62f0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a62f4: 0xa60c001a  sh          $t4, 0x1A($s0)
    ctx->pc = 0x3a62f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 12));
    // 0x3a62f8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A62F8u;
    SET_GPR_U32(ctx, 31, 0x3A6300u);
    ctx->pc = 0x3A62FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A62F8u;
    // 0x3a62fc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A62F8u, 0x3A6300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6300u;
label_3a6300:
    // 0x3a6300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6304: 0xc0eb300  jal         func_3ACC00
    ctx->pc = 0x3A6304u;
    SET_GPR_U32(ctx, 31, 0x3A630Cu);
    ctx->pc = 0x3A6308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6304u;
    // 0x3a6308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC00u, 0x3A6304u, 0x3A630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A630Cu;
label_3a630c:
    // 0x3a630c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A630Cu;
    {
        const bool branch_taken_0x3a630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a630c) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A6314u;
    // 0x3a6314: 0x0  nop
    ctx->pc = 0x3a6314u;
    // NOP
label_3a6318:
    // 0x3a6318: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a6318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a631c: 0xc095150  jal         func_254540
    ctx->pc = 0x3A631Cu;
    SET_GPR_U32(ctx, 31, 0x3A6324u);
    ctx->pc = 0x3A6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A631Cu;
    // 0x3a6320: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A631Cu, 0x3A6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6324u;
label_3a6324:
    // 0x3a6324: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A6324u;
    {
        const bool branch_taken_0x3a6324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6324u;
        // 0x3a6328: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6324) {
            ctx->pc = 0x3A6330u;
            goto label_3a6330;
        }
    }
    ctx->pc = 0x3A632Cu;
    // 0x3a632c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a632cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a6330:
    // 0x3a6330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a6330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6338: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6338u;
        // 0x3a633c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6340u;
}
