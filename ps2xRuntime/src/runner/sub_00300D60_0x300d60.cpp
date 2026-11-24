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

// Function: sub_00300D60
// Address: 0x300d60 - 0x300f78
void sub_00300D60_0x300d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300D60_0x300d60");
#endif

    switch (ctx->pc) {
        case 0x300db4u: goto label_300db4;
        case 0x300decu: goto label_300dec;
        case 0x300e00u: goto label_300e00;
        case 0x300e40u: goto label_300e40;
        case 0x300e50u: goto label_300e50;
        case 0x300ebcu: goto label_300ebc;
        case 0x300f68u: goto label_300f68;
        default: break;
    }

    ctx->pc = 0x300d60u;

    // 0x300d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x300d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x300d64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x300d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300d68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x300d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x300d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x300d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x300d70: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x300d70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x300d74: 0x10c3002e  beq         $a2, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x300D74u;
    {
        const bool branch_taken_0x300d74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x300D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D74u;
        // 0x300d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d74) {
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300D7Cu;
    // 0x300d7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300d80: 0x10c30023  beq         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x300D80u;
    {
        const bool branch_taken_0x300d80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x300d80) {
            ctx->pc = 0x300E10u;
            goto label_300e10;
        }
    }
    ctx->pc = 0x300D88u;
    // 0x300d88: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x300D88u;
    {
        const bool branch_taken_0x300d88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d88) {
            ctx->pc = 0x300D98u;
            goto label_300d98;
        }
    }
    ctx->pc = 0x300D90u;
    // 0x300d90: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x300D90u;
    {
        const bool branch_taken_0x300d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d90) {
            ctx->pc = 0x300F68u;
            goto label_300f68;
        }
    }
    ctx->pc = 0x300D98u;
label_300d98:
    // 0x300d98: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x300D98u;
    {
        const bool branch_taken_0x300d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d98) {
            ctx->pc = 0x300DF8u;
            goto label_300df8;
        }
    }
    ctx->pc = 0x300DA0u;
    // 0x300da0: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x300da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x300da4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x300da4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x300da8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x300da8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x300dac: 0xc0aad70  jal         func_2AB5C0
    ctx->pc = 0x300DACu;
    SET_GPR_U32(ctx, 31, 0x300DB4u);
    ctx->pc = 0x300DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300DACu;
    // 0x300db0: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB5C0u, 0x300DACu, 0x300DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DB4u;
label_300db4:
    // 0x300db4: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x300db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x300db8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x300db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x300dbc: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x300dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x300dc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x300dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x300dc4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x300dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x300dc8: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x300dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x300dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x300dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300dd0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x300dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x300dd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x300dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300dd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300dd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ddc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x300ddcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300de0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x300de0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300de4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x300DE4u;
    SET_GPR_U32(ctx, 31, 0x300DECu);
    ctx->pc = 0x300DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300DE4u;
    // 0x300de8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x300DE4u, 0x300DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DECu;
label_300dec:
    // 0x300dec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300DECu;
    {
        const bool branch_taken_0x300dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300dec) {
            ctx->pc = 0x300E00u;
            goto label_300e00;
        }
    }
    ctx->pc = 0x300DF4u;
    // 0x300df4: 0x0  nop
    ctx->pc = 0x300df4u;
    // NOP
label_300df8:
    // 0x300df8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300DF8u;
    SET_GPR_U32(ctx, 31, 0x300E00u);
    ctx->pc = 0x300DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300DF8u;
    // 0x300dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300DF8u, 0x300E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E00u;
label_300e00:
    // 0x300e00: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x300e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x300e04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x300e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x300e08: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x300E08u;
    {
        const bool branch_taken_0x300e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E08u;
        // 0x300e0c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e08) {
            ctx->pc = 0x300F68u;
            goto label_300f68;
        }
    }
    ctx->pc = 0x300E10u;
label_300e10:
    // 0x300e10: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x300e10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x300e14: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x300e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x300e18: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x300e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x300e1c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x300e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x300e20: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x300e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x300e24: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x300e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x300e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x300e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x300e2c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x300e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_300e30:
    // 0x300e30: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x300e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x300e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300e38: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x300E38u;
    SET_GPR_U32(ctx, 31, 0x300E40u);
    ctx->pc = 0x300E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E38u;
    // 0x300e3c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x300E38u, 0x300E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E40u;
label_300e40:
    // 0x300e40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300E40u;
    {
        const bool branch_taken_0x300e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E40u;
        // 0x300e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e40) {
            ctx->pc = 0x300E50u;
            goto label_300e50;
        }
    }
    ctx->pc = 0x300E48u;
    // 0x300e48: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300E48u;
    SET_GPR_U32(ctx, 31, 0x300E50u);
    ctx->pc = 0x300E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E48u;
    // 0x300e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300E48u, 0x300E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E50u;
label_300e50:
    // 0x300e50: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x300e50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300e54: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x300E54u;
    {
        const bool branch_taken_0x300e54 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x300E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E54u;
        // 0x300e58: 0x2861003d  slti        $at, $v1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e54) {
            ctx->pc = 0x300EC0u;
            goto label_300ec0;
        }
    }
    ctx->pc = 0x300E5Cu;
    // 0x300e5c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x300E5Cu;
    {
        const bool branch_taken_0x300e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300e5c) {
            ctx->pc = 0x300EC0u;
            goto label_300ec0;
        }
    }
    ctx->pc = 0x300E64u;
    // 0x300e64: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300e68: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x300e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x300e6c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x300e6cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x300e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300e74: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x300e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x300e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300e7c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300e80: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x300e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x300e84: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x300e84u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x300e88: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300e8c: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x300e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x300e90: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x300e90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x300e94: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300e98: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x300e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x300e9c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x300e9cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x300ea0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x300ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x300ea4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x300ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x300ea8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x300ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x300eac: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x300eacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x300eb0: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x300eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300eb4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x300EB4u;
    SET_GPR_U32(ctx, 31, 0x300EBCu);
    ctx->pc = 0x300EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300EB4u;
    // 0x300eb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x300EB4u, 0x300EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EBCu;
label_300ebc:
    // 0x300ebc: 0x0  nop
    ctx->pc = 0x300ebcu;
    // NOP
label_300ec0:
    // 0x300ec0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x300ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x300ec4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x300EC4u;
    {
        const bool branch_taken_0x300ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EC4u;
        // 0x300ec8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ec4) {
            ctx->pc = 0x300ED8u;
            goto label_300ed8;
        }
    }
    ctx->pc = 0x300ECCu;
    // 0x300ecc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x300ECCu;
    {
        const bool branch_taken_0x300ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ecc) {
            ctx->pc = 0x300F58u;
            goto label_300f58;
        }
    }
    ctx->pc = 0x300ED4u;
    // 0x300ed4: 0x0  nop
    ctx->pc = 0x300ed4u;
    // NOP
label_300ed8:
    // 0x300ed8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x300ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300edc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x300edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x300ee0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x300ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x300ee4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300ee8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x300ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x300eec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x300EECu;
    {
        const bool branch_taken_0x300eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x300eec) {
            ctx->pc = 0x300F28u;
            goto label_300f28;
        }
    }
    ctx->pc = 0x300EF4u;
    // 0x300ef4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x300ef4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300ef8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x300ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x300efc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x300EFCu;
    {
        const bool branch_taken_0x300efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EFCu;
        // 0x300f00: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300efc) {
            ctx->pc = 0x300F50u;
            goto label_300f50;
        }
    }
    ctx->pc = 0x300F04u;
    // 0x300f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300f08: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x300f08u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x300f0c: 0x0  nop
    ctx->pc = 0x300f0cu;
    // NOP
    // 0x300f10: 0x0  nop
    ctx->pc = 0x300f10u;
    // NOP
    // 0x300f14: 0x2010  mfhi        $a0
    ctx->pc = 0x300f14u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x300f18: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300f1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x300F1Cu;
    {
        const bool branch_taken_0x300f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F1Cu;
        // 0x300f20: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f1c) {
            ctx->pc = 0x300F50u;
            goto label_300f50;
        }
    }
    ctx->pc = 0x300F24u;
    // 0x300f24: 0x0  nop
    ctx->pc = 0x300f24u;
    // NOP
label_300f28:
    // 0x300f28: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x300f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300f2c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x300f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x300f30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x300F30u;
    {
        const bool branch_taken_0x300f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300f30) {
            ctx->pc = 0x300F50u;
            goto label_300f50;
        }
    }
    ctx->pc = 0x300F38u;
    // 0x300f38: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300f3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300f40: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x300f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x300f44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300F44u;
    {
        const bool branch_taken_0x300f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F44u;
        // 0x300f48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f44) {
            ctx->pc = 0x300F58u;
            goto label_300f58;
        }
    }
    ctx->pc = 0x300F4Cu;
    // 0x300f4c: 0x0  nop
    ctx->pc = 0x300f4cu;
    // NOP
label_300f50:
    // 0x300f50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300f54: 0x0  nop
    ctx->pc = 0x300f54u;
    // NOP
label_300f58:
    // 0x300f58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300F58u;
    {
        const bool branch_taken_0x300f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F58u;
        // 0x300f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f58) {
            ctx->pc = 0x300F68u;
            goto label_300f68;
        }
    }
    ctx->pc = 0x300F60u;
    // 0x300f60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300F60u;
    SET_GPR_U32(ctx, 31, 0x300F68u);
    ctx->pc = 0x300F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300F60u;
    // 0x300f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300F60u, 0x300F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300F68u;
label_300f68:
    // 0x300f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x300f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300f6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x300f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300f70: 0x3e00008  jr          $ra
    ctx->pc = 0x300F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F70u;
        // 0x300f74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300F78u;
}
