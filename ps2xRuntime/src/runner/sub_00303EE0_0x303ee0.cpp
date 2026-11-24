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

// Function: sub_00303EE0
// Address: 0x303ee0 - 0x304294
void sub_00303EE0_0x303ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303EE0_0x303ee0");
#endif

    switch (ctx->pc) {
        case 0x303f24u: goto label_303f24;
        case 0x303f64u: goto label_303f64;
        case 0x303f7cu: goto label_303f7c;
        case 0x303fccu: goto label_303fcc;
        case 0x304010u: goto label_304010;
        case 0x304038u: goto label_304038;
        case 0x304048u: goto label_304048;
        case 0x304130u: goto label_304130;
        case 0x3041a0u: goto label_3041a0;
        case 0x304228u: goto label_304228;
        case 0x304254u: goto label_304254;
        case 0x304260u: goto label_304260;
        default: break;
    }

    ctx->pc = 0x303ee0u;

    // 0x303ee0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x303ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x303ee4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x303ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x303ee8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x303ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x303eec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x303eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x303ef0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x303ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x303ef4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x303ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x303ef8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x303ef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x303efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x303f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x303f04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303f0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x303f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303f10: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x303f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x303f14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303F14u;
    {
        const bool branch_taken_0x303f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F14u;
        // 0x303f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f14) {
            ctx->pc = 0x303F30u;
            goto label_303f30;
        }
    }
    ctx->pc = 0x303F1Cu;
    // 0x303f1c: 0xc0a83f8  jal         func_2A0FE0
    ctx->pc = 0x303F1Cu;
    SET_GPR_U32(ctx, 31, 0x303F24u);
    ctx->pc = 0x303F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F1Cu;
    // 0x303f20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0FE0u, 0x303F1Cu, 0x303F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F24u;
label_303f24:
    // 0x303f24: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x303F24u;
    {
        const bool branch_taken_0x303f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F24u;
        // 0x303f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f24) {
            ctx->pc = 0x304268u;
            goto label_304268;
        }
    }
    ctx->pc = 0x303F2Cu;
    // 0x303f2c: 0x0  nop
    ctx->pc = 0x303f2cu;
    // NOP
label_303f30:
    // 0x303f30: 0x8e021d04  lw          $v0, 0x1D04($s0)
    ctx->pc = 0x303f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7428)));
    // 0x303f34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303F34u;
    {
        const bool branch_taken_0x303f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f34) {
            ctx->pc = 0x303F4Cu;
            goto label_303f4c;
        }
    }
    ctx->pc = 0x303F3Cu;
    // 0x303f3c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x303f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x303f40: 0x8e021c00  lw          $v0, 0x1C00($s0)
    ctx->pc = 0x303f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7168)));
    // 0x303f44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x303F44u;
    {
        const bool branch_taken_0x303f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F44u;
        // 0x303f48: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f44) {
            ctx->pc = 0x303F50u;
            goto label_303f50;
        }
    }
    ctx->pc = 0x303F4Cu;
label_303f4c:
    // 0x303f4c: 0x8e021c00  lw          $v0, 0x1C00($s0)
    ctx->pc = 0x303f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7168)));
label_303f50:
    // 0x303f50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x303F50u;
    {
        const bool branch_taken_0x303f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F50u;
        // 0x303f54: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f50) {
            ctx->pc = 0x303F70u;
            goto label_303f70;
        }
    }
    ctx->pc = 0x303F58u;
    // 0x303f58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x303f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f5c: 0xc0517dc  jal         func_145F70
    ctx->pc = 0x303F5Cu;
    SET_GPR_U32(ctx, 31, 0x303F64u);
    ctx->pc = 0x303F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F5Cu;
    // 0x303f60: 0x248487d0  addiu       $a0, $a0, -0x7830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F70u, 0x303F5Cu, 0x303F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F64u;
label_303f64:
    // 0x303f64: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x303F64u;
    {
        const bool branch_taken_0x303f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f64) {
            ctx->pc = 0x304268u;
            goto label_304268;
        }
    }
    ctx->pc = 0x303F6Cu;
    // 0x303f6c: 0x0  nop
    ctx->pc = 0x303f6cu;
    // NOP
label_303f70:
    // 0x303f70: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x303f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x303f74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x303F74u;
    {
        const bool branch_taken_0x303f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F74u;
        // 0x303f78: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f74) {
            ctx->pc = 0x303F98u;
            goto label_303f98;
        }
    }
    ctx->pc = 0x303F7Cu;
label_303f7c:
    // 0x303f7c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x303f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x303f80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x303f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x303f84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x303f88: 0x0  nop
    ctx->pc = 0x303f88u;
    // NOP
    // 0x303f8c: 0x0  nop
    ctx->pc = 0x303f8cu;
    // NOP
    // 0x303f90: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x303F90u;
    {
        const bool branch_taken_0x303f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303f90) {
            ctx->pc = 0x303F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303f7c;
        }
    }
    ctx->pc = 0x303F98u;
label_303f98:
    // 0x303f98: 0x8e021c00  lw          $v0, 0x1C00($s0)
    ctx->pc = 0x303f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7168)));
    // 0x303f9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x303f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303fa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303FA0u;
    {
        const bool branch_taken_0x303fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303fa0) {
            ctx->pc = 0x303FB8u;
            goto label_303fb8;
        }
    }
    ctx->pc = 0x303FA8u;
    // 0x303fa8: 0x96021e0e  lhu         $v0, 0x1E0E($s0)
    ctx->pc = 0x303fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7694)));
    // 0x303fac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x303facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x303fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x303fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303fb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x303fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_303fb8:
    // 0x303fb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303FB8u;
    {
        const bool branch_taken_0x303fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FB8u;
        // 0x303fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fb8) {
            ctx->pc = 0x303FD0u;
            goto label_303fd0;
        }
    }
    ctx->pc = 0x303FC0u;
    // 0x303fc0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x303fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x303fc4: 0xc0c1474  jal         func_3051D0
    ctx->pc = 0x303FC4u;
    SET_GPR_U32(ctx, 31, 0x303FCCu);
    ctx->pc = 0x303FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FC4u;
    // 0x303fc8: 0x26061c00  addiu       $a2, $s0, 0x1C00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 7168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3051D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3051D0u, 0x303FC4u, 0x303FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FCCu;
label_303fcc:
    // 0x303fcc: 0x0  nop
    ctx->pc = 0x303fccu;
    // NOP
label_303fd0:
    // 0x303fd0: 0x8e031d04  lw          $v1, 0x1D04($s0)
    ctx->pc = 0x303fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7428)));
    // 0x303fd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x303FD4u;
    {
        const bool branch_taken_0x303fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FD4u;
        // 0x303fd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fd4) {
            ctx->pc = 0x303FF8u;
            goto label_303ff8;
        }
    }
    ctx->pc = 0x303FDCu;
    // 0x303fdc: 0x96021e0e  lhu         $v0, 0x1E0E($s0)
    ctx->pc = 0x303fdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7694)));
    // 0x303fe0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x303fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x303fe4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x303fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303fe8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x303fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x303fec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x303FECu;
    {
        const bool branch_taken_0x303fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303fec) {
            ctx->pc = 0x303FF8u;
            goto label_303ff8;
        }
    }
    ctx->pc = 0x303FF4u;
    // 0x303ff4: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x303ff4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_303ff8:
    // 0x303ff8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303FF8u;
    {
        const bool branch_taken_0x303ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303ff8) {
            ctx->pc = 0x304010u;
            goto label_304010;
        }
    }
    ctx->pc = 0x304000u;
    // 0x304000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304004: 0x24660014  addiu       $a2, $v1, 0x14
    ctx->pc = 0x304004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x304008: 0xc0c1474  jal         func_3051D0
    ctx->pc = 0x304008u;
    SET_GPR_U32(ctx, 31, 0x304010u);
    ctx->pc = 0x30400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304008u;
    // 0x30400c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3051D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3051D0u, 0x304008u, 0x304010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304010u;
label_304010:
    // 0x304010: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x304014: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x304014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x304018: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
    ctx->pc = 0x304018u;
    {
        const bool branch_taken_0x304018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304018u;
        // 0x30401c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304018) {
            ctx->pc = 0x304178u;
            goto label_304178;
        }
    }
    ctx->pc = 0x304020u;
    // 0x304020: 0x27b20120  addiu       $s2, $sp, 0x120
    ctx->pc = 0x304020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x304024: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x304024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x304028: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x304028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30402c: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x30402cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x304030: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x304030u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x304034: 0x0  nop
    ctx->pc = 0x304034u;
    // NOP
label_304038:
    // 0x304038: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x304038u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30403c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x30403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x304040: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x304040u;
    {
        const bool branch_taken_0x304040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304040u;
        // 0x304044: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304040) {
            ctx->pc = 0x304064u;
            goto label_304064;
        }
    }
    ctx->pc = 0x304048u;
label_304048:
    // 0x304048: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x304048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30404c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x304050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x304050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x304054: 0x0  nop
    ctx->pc = 0x304054u;
    // NOP
    // 0x304058: 0x0  nop
    ctx->pc = 0x304058u;
    // NOP
    // 0x30405c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30405Cu;
    {
        const bool branch_taken_0x30405c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30405c) {
            ctx->pc = 0x304048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304048;
        }
    }
    ctx->pc = 0x304064u;
label_304064:
    // 0x304064: 0x92620008  lbu         $v0, 0x8($s3)
    ctx->pc = 0x304064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x304068: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304068u;
    {
        const bool branch_taken_0x304068 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304068u;
        // 0x30406c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304068) {
            ctx->pc = 0x30407Cu;
            goto label_30407c;
        }
    }
    ctx->pc = 0x304070u;
    // 0x304070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304074: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304074u;
    {
        const bool branch_taken_0x304074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304074u;
        // 0x304078: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304074) {
            ctx->pc = 0x304094u;
            goto label_304094;
        }
    }
    ctx->pc = 0x30407Cu;
label_30407c:
    // 0x30407c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304088: 0x0  nop
    ctx->pc = 0x304088u;
    // NOP
    // 0x30408c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30408cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304090: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304094:
    // 0x304094: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x304094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x304098: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x304098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x30409c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x30409cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3040a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3040a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3040a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3040A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040A4u;
        // 0x3040a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x3040B8u;
            goto label_3040b8;
        }
    }
    ctx->pc = 0x3040ACu;
    // 0x3040ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3040acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3040b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3040B0u;
    {
        const bool branch_taken_0x3040b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040B0u;
        // 0x3040b4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040b0) {
            ctx->pc = 0x3040D0u;
            goto label_3040d0;
        }
    }
    ctx->pc = 0x3040B8u;
label_3040b8:
    // 0x3040b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3040b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3040bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3040bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3040c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3040c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3040c4: 0x0  nop
    ctx->pc = 0x3040c4u;
    // NOP
    // 0x3040c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3040c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3040cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3040ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3040d0:
    // 0x3040d0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x3040d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x3040d4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3040d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3040d8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3040d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3040dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3040dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3040e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3040E0u;
    {
        const bool branch_taken_0x3040e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3040E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040E0u;
        // 0x3040e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040e0) {
            ctx->pc = 0x3040F4u;
            goto label_3040f4;
        }
    }
    ctx->pc = 0x3040E8u;
    // 0x3040e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3040e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3040ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3040ECu;
    {
        const bool branch_taken_0x3040ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3040F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040ECu;
        // 0x3040f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040ec) {
            ctx->pc = 0x30410Cu;
            goto label_30410c;
        }
    }
    ctx->pc = 0x3040F4u;
label_3040f4:
    // 0x3040f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3040f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3040f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3040f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3040fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3040fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304100: 0x0  nop
    ctx->pc = 0x304100u;
    // NOP
    // 0x304104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304108: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30410c:
    // 0x30410c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x30410cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x304110: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x304110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x304114: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x304114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304118: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x304118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x30411c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30411cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304124: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x304124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x304128: 0xc0414dc  jal         func_105370
    ctx->pc = 0x304128u;
    SET_GPR_U32(ctx, 31, 0x304130u);
    ctx->pc = 0x30412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304128u;
    // 0x30412c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x304128u, 0x304130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304130u;
label_304130:
    // 0x304130: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x304130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304134: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x304134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x304138: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x304138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x30413c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x30413cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x304140: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x304140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304144: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x304144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x304148: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x304148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30414c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x30414cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x304150: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x304150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304154: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x304154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x304158: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x304158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x30415c: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x30415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304160: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x304160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x304164: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x304164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x304168: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x304168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x30416c: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x30416cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x304170: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x304170u;
    {
        const bool branch_taken_0x304170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304170u;
        // 0x304174: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304170) {
            ctx->pc = 0x304038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304038;
        }
    }
    ctx->pc = 0x304178u;
label_304178:
    // 0x304178: 0x2c810004  sltiu       $at, $a0, 0x4
    ctx->pc = 0x304178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30417c: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x30417Cu;
    {
        const bool branch_taken_0x30417c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x304180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30417Cu;
        // 0x304180: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30417c) {
            ctx->pc = 0x304248u;
            goto label_304248;
        }
    }
    ctx->pc = 0x304184u;
    // 0x304184: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x304184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x304188: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x304188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x30418c: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x30418Cu;
    {
        const bool branch_taken_0x30418c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30418c) {
            ctx->pc = 0x304210u;
            goto label_304210;
        }
    }
    ctx->pc = 0x304194u;
    // 0x304194: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x304194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x304198: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x304198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x30419c: 0x244300e0  addiu       $v1, $v0, 0xE0
    ctx->pc = 0x30419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_3041a0:
    // 0x3041a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3041a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3041a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3041a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3041a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3041a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3041ac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3041acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3041b0: 0x2c82fffc  sltiu       $v0, $a0, -0x4
    ctx->pc = 0x3041b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x3041b4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3041b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3041b8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3041b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3041bc: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x3041bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x3041c0: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x3041c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x3041c4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x3041c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x3041c8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x3041c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x3041cc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x3041ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x3041d0: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x3041d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x3041d4: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x3041d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x3041d8: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x3041d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x3041dc: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x3041dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x3041e0: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x3041e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x3041e4: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x3041e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x3041e8: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x3041e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x3041ec: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x3041ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x3041f0: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x3041f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x3041f4: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x3041f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x3041f8: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x3041f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x3041fc: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x3041fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x304200: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x304200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
    // 0x304204: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x304204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    // 0x304208: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x304208u;
    {
        const bool branch_taken_0x304208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304208u;
        // 0x30420c: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304208) {
            ctx->pc = 0x3041A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3041a0;
        }
    }
    ctx->pc = 0x304210u;
label_304210:
    // 0x304210: 0x2c810004  sltiu       $at, $a0, 0x4
    ctx->pc = 0x304210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x304214: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x304214u;
    {
        const bool branch_taken_0x304214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x304218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304214u;
        // 0x304218: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304214) {
            ctx->pc = 0x304248u;
            goto label_304248;
        }
    }
    ctx->pc = 0x30421Cu;
    // 0x30421c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x30421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x304220: 0x244300e0  addiu       $v1, $v0, 0xE0
    ctx->pc = 0x304220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x304224: 0x0  nop
    ctx->pc = 0x304224u;
    // NOP
label_304228:
    // 0x304228: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x304228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x30422c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30422cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x304230: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x304230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x304234: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x304234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x304238: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x304238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30423c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30423Cu;
    {
        const bool branch_taken_0x30423c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30423Cu;
        // 0x304240: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30423c) {
            ctx->pc = 0x304228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304228;
        }
    }
    ctx->pc = 0x304244u;
    // 0x304244: 0x0  nop
    ctx->pc = 0x304244u;
    // NOP
label_304248:
    // 0x304248: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30424c: 0xc0a8ebc  jal         func_2A3AF0
    ctx->pc = 0x30424Cu;
    SET_GPR_U32(ctx, 31, 0x304254u);
    ctx->pc = 0x304250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30424Cu;
    // 0x304250: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3AF0u, 0x30424Cu, 0x304254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304254u;
label_304254:
    // 0x304254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304258: 0xc0a8ecc  jal         func_2A3B30
    ctx->pc = 0x304258u;
    SET_GPR_U32(ctx, 31, 0x304260u);
    ctx->pc = 0x30425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304258u;
    // 0x30425c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B30u, 0x304258u, 0x304260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304260u;
label_304260:
    // 0x304260: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x304260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x304264: 0x0  nop
    ctx->pc = 0x304264u;
    // NOP
label_304268:
    // 0x304268: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x304268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30426c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30426cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304270: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x304270u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304274: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x304274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304278: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x304278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30427c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30427cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x304280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30428c: 0x3e00008  jr          $ra
    ctx->pc = 0x30428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30428Cu;
        // 0x304290: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304294u;
}
