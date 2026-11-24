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

// Function: sub_0030CF30
// Address: 0x30cf30 - 0x30d108
void sub_0030CF30_0x30cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CF30_0x30cf30");
#endif

    switch (ctx->pc) {
        case 0x30cf80u: goto label_30cf80;
        case 0x30cf90u: goto label_30cf90;
        case 0x30cfd0u: goto label_30cfd0;
        case 0x30cfe0u: goto label_30cfe0;
        case 0x30d050u: goto label_30d050;
        case 0x30d0f8u: goto label_30d0f8;
        default: break;
    }

    ctx->pc = 0x30cf30u;

    // 0x30cf30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30cf34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30cf38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30cf3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30cf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30cf40: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x30cf40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x30cf44: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x30CF44u;
    {
        const bool branch_taken_0x30cf44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x30CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF44u;
        // 0x30cf48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf44) {
            ctx->pc = 0x30CFC0u;
            goto label_30cfc0;
        }
    }
    ctx->pc = 0x30CF4Cu;
    // 0x30cf4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cf50: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30CF50u;
    {
        const bool branch_taken_0x30cf50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x30cf50) {
            ctx->pc = 0x30CFA0u;
            goto label_30cfa0;
        }
    }
    ctx->pc = 0x30CF58u;
    // 0x30cf58: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CF58u;
    {
        const bool branch_taken_0x30cf58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf58) {
            ctx->pc = 0x30CF68u;
            goto label_30cf68;
        }
    }
    ctx->pc = 0x30CF60u;
    // 0x30cf60: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x30CF60u;
    {
        const bool branch_taken_0x30cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf60) {
            ctx->pc = 0x30D0F8u;
            goto label_30d0f8;
        }
    }
    ctx->pc = 0x30CF68u;
label_30cf68:
    // 0x30cf68: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CF68u;
    {
        const bool branch_taken_0x30cf68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf68) {
            ctx->pc = 0x30CF88u;
            goto label_30cf88;
        }
    }
    ctx->pc = 0x30CF70u;
    // 0x30cf70: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x30cf70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x30cf74: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x30cf74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x30cf78: 0xc0a9c50  jal         func_2A7140
    ctx->pc = 0x30CF78u;
    SET_GPR_U32(ctx, 31, 0x30CF80u);
    ctx->pc = 0x30CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF78u;
    // 0x30cf7c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7140u, 0x30CF78u, 0x30CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF80u;
label_30cf80:
    // 0x30cf80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30CF80u;
    {
        const bool branch_taken_0x30cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF80u;
        // 0x30cf84: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf80) {
            ctx->pc = 0x30CF90u;
            goto label_30cf90;
        }
    }
    ctx->pc = 0x30CF88u;
label_30cf88:
    // 0x30cf88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30CF88u;
    SET_GPR_U32(ctx, 31, 0x30CF90u);
    ctx->pc = 0x30CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF88u;
    // 0x30cf8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30CF88u, 0x30CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF90u;
label_30cf90:
    // 0x30cf90: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x30cf90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x30cf94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30cf98: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30CF98u;
    {
        const bool branch_taken_0x30cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF98u;
        // 0x30cf9c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf98) {
            ctx->pc = 0x30D0F8u;
            goto label_30d0f8;
        }
    }
    ctx->pc = 0x30CFA0u;
label_30cfa0:
    // 0x30cfa0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x30cfa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x30cfa4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x30cfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cfa8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x30cfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30cfac: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x30cfacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfb0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x30cfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfb4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x30cfb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x30cfb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cfbc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x30cfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_30cfc0:
    // 0x30cfc0: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x30cfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x30cfc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cfc8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x30CFC8u;
    SET_GPR_U32(ctx, 31, 0x30CFD0u);
    ctx->pc = 0x30CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFC8u;
    // 0x30cfcc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x30CFC8u, 0x30CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFD0u;
label_30cfd0:
    // 0x30cfd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CFD0u;
    {
        const bool branch_taken_0x30cfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFD0u;
        // 0x30cfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfd0) {
            ctx->pc = 0x30CFE0u;
            goto label_30cfe0;
        }
    }
    ctx->pc = 0x30CFD8u;
    // 0x30cfd8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30CFD8u;
    SET_GPR_U32(ctx, 31, 0x30CFE0u);
    ctx->pc = 0x30CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFD8u;
    // 0x30cfdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30CFD8u, 0x30CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFE0u;
label_30cfe0:
    // 0x30cfe0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x30cfe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30cfe4: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x30cfe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x30cfe8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x30CFE8u;
    {
        const bool branch_taken_0x30cfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFE8u;
        // 0x30cfec: 0x28817531  slti        $at, $a0, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfe8) {
            ctx->pc = 0x30D050u;
            goto label_30d050;
        }
    }
    ctx->pc = 0x30CFF0u;
    // 0x30cff0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x30CFF0u;
    {
        const bool branch_taken_0x30cff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cff0) {
            ctx->pc = 0x30D050u;
            goto label_30d050;
        }
    }
    ctx->pc = 0x30CFF8u;
    // 0x30cff8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30cff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30cffc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x30cffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30d000: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x30d000u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x30d004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d008: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30d008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30d00c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30d00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d010: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30d010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30d014: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x30d014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x30d018: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x30d018u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x30d01c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30d01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30d020: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x30d020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x30d024: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x30d024u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x30d028: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30d028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30d02c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x30d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x30d030: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x30d030u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x30d034: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x30d034u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x30d038: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x30d038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30d03c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x30d03cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x30d040: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x30d040u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x30d044: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x30d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d048: 0xc0c0900  jal         func_302400
    ctx->pc = 0x30D048u;
    SET_GPR_U32(ctx, 31, 0x30D050u);
    ctx->pc = 0x30D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D048u;
    // 0x30d04c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x30D048u, 0x30D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D050u;
label_30d050:
    // 0x30d050: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x30d050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x30d054: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D054u;
    {
        const bool branch_taken_0x30d054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D054u;
        // 0x30d058: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d054) {
            ctx->pc = 0x30D068u;
            goto label_30d068;
        }
    }
    ctx->pc = 0x30D05Cu;
    // 0x30d05c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30D05Cu;
    {
        const bool branch_taken_0x30d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d05c) {
            ctx->pc = 0x30D0E8u;
            goto label_30d0e8;
        }
    }
    ctx->pc = 0x30D064u;
    // 0x30d064: 0x0  nop
    ctx->pc = 0x30d064u;
    // NOP
label_30d068:
    // 0x30d068: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x30d068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30d06c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x30d070: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d074: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x30d074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d078: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x30d078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x30d07c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30D07Cu;
    {
        const bool branch_taken_0x30d07c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d07c) {
            ctx->pc = 0x30D0B8u;
            goto label_30d0b8;
        }
    }
    ctx->pc = 0x30D084u;
    // 0x30d084: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x30d084u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30d088: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x30d088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30d08c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30D08Cu;
    {
        const bool branch_taken_0x30d08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D08Cu;
        // 0x30d090: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d08c) {
            ctx->pc = 0x30D0E0u;
            goto label_30d0e0;
        }
    }
    ctx->pc = 0x30D094u;
    // 0x30d094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d098: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x30d098u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30d09c: 0x0  nop
    ctx->pc = 0x30d09cu;
    // NOP
    // 0x30d0a0: 0x0  nop
    ctx->pc = 0x30d0a0u;
    // NOP
    // 0x30d0a4: 0x2010  mfhi        $a0
    ctx->pc = 0x30d0a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x30d0a8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x30d0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d0ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30D0ACu;
    {
        const bool branch_taken_0x30d0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0ACu;
        // 0x30d0b0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0ac) {
            ctx->pc = 0x30D0E0u;
            goto label_30d0e0;
        }
    }
    ctx->pc = 0x30D0B4u;
    // 0x30d0b4: 0x0  nop
    ctx->pc = 0x30d0b4u;
    // NOP
label_30d0b8:
    // 0x30d0b8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x30d0b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30d0bc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30d0bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30d0c0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D0C0u;
    {
        const bool branch_taken_0x30d0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d0c0) {
            ctx->pc = 0x30D0E0u;
            goto label_30d0e0;
        }
    }
    ctx->pc = 0x30D0C8u;
    // 0x30d0c8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x30d0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d0cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d0d0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x30d0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30d0d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D0D4u;
    {
        const bool branch_taken_0x30d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0D4u;
        // 0x30d0d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0d4) {
            ctx->pc = 0x30D0E8u;
            goto label_30d0e8;
        }
    }
    ctx->pc = 0x30D0DCu;
    // 0x30d0dc: 0x0  nop
    ctx->pc = 0x30d0dcu;
    // NOP
label_30d0e0:
    // 0x30d0e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d0e4: 0x0  nop
    ctx->pc = 0x30d0e4u;
    // NOP
label_30d0e8:
    // 0x30d0e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D0E8u;
    {
        const bool branch_taken_0x30d0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0E8u;
        // 0x30d0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0e8) {
            ctx->pc = 0x30D0F8u;
            goto label_30d0f8;
        }
    }
    ctx->pc = 0x30D0F0u;
    // 0x30d0f0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D0F0u;
    SET_GPR_U32(ctx, 31, 0x30D0F8u);
    ctx->pc = 0x30D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0F0u;
    // 0x30d0f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D0F0u, 0x30D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D0F8u;
label_30d0f8:
    // 0x30d0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d100: 0x3e00008  jr          $ra
    ctx->pc = 0x30D100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D100u;
        // 0x30d104: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D108u;
}
