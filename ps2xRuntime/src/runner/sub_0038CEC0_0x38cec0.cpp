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

// Function: sub_0038CEC0
// Address: 0x38cec0 - 0x38d0a0
void sub_0038CEC0_0x38cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CEC0_0x38cec0");
#endif

    switch (ctx->pc) {
        case 0x38cf14u: goto label_38cf14;
        case 0x38cf28u: goto label_38cf28;
        case 0x38cf68u: goto label_38cf68;
        case 0x38cf78u: goto label_38cf78;
        case 0x38cfe8u: goto label_38cfe8;
        case 0x38d090u: goto label_38d090;
        default: break;
    }

    ctx->pc = 0x38cec0u;

    // 0x38cec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38cec4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38cec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38cecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38ced0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x38ced0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x38ced4: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x38CED4u;
    {
        const bool branch_taken_0x38ced4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x38CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CED4u;
        // 0x38ced8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ced4) {
            ctx->pc = 0x38CF58u;
            goto label_38cf58;
        }
    }
    ctx->pc = 0x38CEDCu;
    // 0x38cedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38cee0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x38CEE0u;
    {
        const bool branch_taken_0x38cee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x38cee0) {
            ctx->pc = 0x38CF38u;
            goto label_38cf38;
        }
    }
    ctx->pc = 0x38CEE8u;
    // 0x38cee8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CEE8u;
    {
        const bool branch_taken_0x38cee8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cee8) {
            ctx->pc = 0x38CEF8u;
            goto label_38cef8;
        }
    }
    ctx->pc = 0x38CEF0u;
    // 0x38cef0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x38CEF0u;
    {
        const bool branch_taken_0x38cef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cef0) {
            ctx->pc = 0x38D090u;
            goto label_38d090;
        }
    }
    ctx->pc = 0x38CEF8u;
label_38cef8:
    // 0x38cef8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38CEF8u;
    {
        const bool branch_taken_0x38cef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cef8) {
            ctx->pc = 0x38CF20u;
            goto label_38cf20;
        }
    }
    ctx->pc = 0x38CF00u;
    // 0x38cf00: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x38cf00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x38cf04: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x38cf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x38cf08: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x38cf08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x38cf0c: 0xc0aa1b4  jal         func_2A86D0
    ctx->pc = 0x38CF0Cu;
    SET_GPR_U32(ctx, 31, 0x38CF14u);
    ctx->pc = 0x38CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF0Cu;
    // 0x38cf10: 0x26070090  addiu       $a3, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A86D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A86D0u, 0x38CF0Cu, 0x38CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CF14u;
label_38cf14:
    // 0x38cf14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38CF14u;
    {
        const bool branch_taken_0x38cf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF14u;
        // 0x38cf18: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf14) {
            ctx->pc = 0x38CF28u;
            goto label_38cf28;
        }
    }
    ctx->pc = 0x38CF1Cu;
    // 0x38cf1c: 0x0  nop
    ctx->pc = 0x38cf1cu;
    // NOP
label_38cf20:
    // 0x38cf20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38CF20u;
    SET_GPR_U32(ctx, 31, 0x38CF28u);
    ctx->pc = 0x38CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF20u;
    // 0x38cf24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38CF20u, 0x38CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CF28u;
label_38cf28:
    // 0x38cf28: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x38cf28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x38cf2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38cf30: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x38CF30u;
    {
        const bool branch_taken_0x38cf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF30u;
        // 0x38cf34: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf30) {
            ctx->pc = 0x38D090u;
            goto label_38d090;
        }
    }
    ctx->pc = 0x38CF38u;
label_38cf38:
    // 0x38cf38: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x38cf38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x38cf3c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x38cf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x38cf40: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x38cf40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x38cf44: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x38cf44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x38cf48: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x38cf48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x38cf4c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x38cf4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x38cf50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38cf54: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x38cf54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_38cf58:
    // 0x38cf58: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x38cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x38cf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cf60: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x38CF60u;
    SET_GPR_U32(ctx, 31, 0x38CF68u);
    ctx->pc = 0x38CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF60u;
    // 0x38cf64: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x38CF60u, 0x38CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CF68u;
label_38cf68:
    // 0x38cf68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CF68u;
    {
        const bool branch_taken_0x38cf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF68u;
        // 0x38cf6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf68) {
            ctx->pc = 0x38CF78u;
            goto label_38cf78;
        }
    }
    ctx->pc = 0x38CF70u;
    // 0x38cf70: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38CF70u;
    SET_GPR_U32(ctx, 31, 0x38CF78u);
    ctx->pc = 0x38CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF70u;
    // 0x38cf74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38CF70u, 0x38CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CF78u;
label_38cf78:
    // 0x38cf78: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x38cf78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x38cf7c: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x38cf7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x38cf80: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x38CF80u;
    {
        const bool branch_taken_0x38cf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF80u;
        // 0x38cf84: 0x28810029  slti        $at, $a0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf80) {
            ctx->pc = 0x38CFE8u;
            goto label_38cfe8;
        }
    }
    ctx->pc = 0x38CF88u;
    // 0x38cf88: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x38CF88u;
    {
        const bool branch_taken_0x38cf88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cf88) {
            ctx->pc = 0x38CFE8u;
            goto label_38cfe8;
        }
    }
    ctx->pc = 0x38CF90u;
    // 0x38cf90: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x38cf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x38cf94: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x38cf94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38cf98: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x38cf98u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x38cf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cfa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38cfa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38cfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cfa8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x38cfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x38cfac: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x38cfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x38cfb0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x38cfb0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x38cfb4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x38cfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x38cfb8: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x38cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x38cfbc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x38cfbcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x38cfc0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x38cfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x38cfc4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x38cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x38cfc8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x38cfc8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x38cfcc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x38cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x38cfd0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x38cfd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x38cfd4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x38cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x38cfd8: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x38cfd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x38cfdc: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x38cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38cfe0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x38CFE0u;
    SET_GPR_U32(ctx, 31, 0x38CFE8u);
    ctx->pc = 0x38CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CFE0u;
    // 0x38cfe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x38CFE0u, 0x38CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CFE8u;
label_38cfe8:
    // 0x38cfe8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x38cfe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x38cfec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38CFECu;
    {
        const bool branch_taken_0x38cfec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFECu;
        // 0x38cff0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cfec) {
            ctx->pc = 0x38D000u;
            goto label_38d000;
        }
    }
    ctx->pc = 0x38CFF4u;
    // 0x38cff4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x38CFF4u;
    {
        const bool branch_taken_0x38cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cff4) {
            ctx->pc = 0x38D080u;
            goto label_38d080;
        }
    }
    ctx->pc = 0x38CFFCu;
    // 0x38cffc: 0x0  nop
    ctx->pc = 0x38cffcu;
    // NOP
label_38d000:
    // 0x38d000: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x38d000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x38d004: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x38d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x38d008: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38d00c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x38d00cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x38d010: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x38d010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x38d014: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x38D014u;
    {
        const bool branch_taken_0x38d014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38d014) {
            ctx->pc = 0x38D050u;
            goto label_38d050;
        }
    }
    ctx->pc = 0x38D01Cu;
    // 0x38d01c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x38d01cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x38d020: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x38d020u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x38d024: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x38D024u;
    {
        const bool branch_taken_0x38d024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D024u;
        // 0x38d028: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d024) {
            ctx->pc = 0x38D078u;
            goto label_38d078;
        }
    }
    ctx->pc = 0x38D02Cu;
    // 0x38d02c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d030: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x38d030u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38d034: 0x0  nop
    ctx->pc = 0x38d034u;
    // NOP
    // 0x38d038: 0x0  nop
    ctx->pc = 0x38d038u;
    // NOP
    // 0x38d03c: 0x2010  mfhi        $a0
    ctx->pc = 0x38d03cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x38d040: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x38d040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x38d044: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38D044u;
    {
        const bool branch_taken_0x38d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D044u;
        // 0x38d048: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d044) {
            ctx->pc = 0x38D078u;
            goto label_38d078;
        }
    }
    ctx->pc = 0x38D04Cu;
    // 0x38d04c: 0x0  nop
    ctx->pc = 0x38d04cu;
    // NOP
label_38d050:
    // 0x38d050: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x38d050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x38d054: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x38d054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38d058: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38D058u;
    {
        const bool branch_taken_0x38d058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d058) {
            ctx->pc = 0x38D078u;
            goto label_38d078;
        }
    }
    ctx->pc = 0x38D060u;
    // 0x38d060: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x38d060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x38d064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d068: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x38d068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x38d06c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38D06Cu;
    {
        const bool branch_taken_0x38d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D06Cu;
        // 0x38d070: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d06c) {
            ctx->pc = 0x38D080u;
            goto label_38d080;
        }
    }
    ctx->pc = 0x38D074u;
    // 0x38d074: 0x0  nop
    ctx->pc = 0x38d074u;
    // NOP
label_38d078:
    // 0x38d078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d07c: 0x0  nop
    ctx->pc = 0x38d07cu;
    // NOP
label_38d080:
    // 0x38d080: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D080u;
    {
        const bool branch_taken_0x38d080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D080u;
        // 0x38d084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d080) {
            ctx->pc = 0x38D090u;
            goto label_38d090;
        }
    }
    ctx->pc = 0x38D088u;
    // 0x38d088: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38D088u;
    SET_GPR_U32(ctx, 31, 0x38D090u);
    ctx->pc = 0x38D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D088u;
    // 0x38d08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38D088u, 0x38D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D090u;
label_38d090:
    // 0x38d090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d098: 0x3e00008  jr          $ra
    ctx->pc = 0x38D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D098u;
        // 0x38d09c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D0A0u;
}
