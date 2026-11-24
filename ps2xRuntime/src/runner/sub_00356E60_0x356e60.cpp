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

// Function: sub_00356E60
// Address: 0x356e60 - 0x3570f8
void sub_00356E60_0x356e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356E60_0x356e60");
#endif

    switch (ctx->pc) {
        case 0x356eb0u: goto label_356eb0;
        case 0x356ec0u: goto label_356ec0;
        case 0x356f14u: goto label_356f14;
        case 0x356f24u: goto label_356f24;
        case 0x356f34u: goto label_356f34;
        case 0x356f50u: goto label_356f50;
        case 0x356f6cu: goto label_356f6c;
        case 0x356f7cu: goto label_356f7c;
        case 0x356fb0u: goto label_356fb0;
        case 0x356fc8u: goto label_356fc8;
        case 0x356fd4u: goto label_356fd4;
        case 0x356fe0u: goto label_356fe0;
        case 0x356ff4u: goto label_356ff4;
        case 0x357028u: goto label_357028;
        case 0x357034u: goto label_357034;
        case 0x3570e8u: goto label_3570e8;
        default: break;
    }

    ctx->pc = 0x356e60u;

    // 0x356e60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x356e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x356e64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x356e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356e68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x356e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x356e6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x356e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x356e70: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x356e70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x356e74: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x356E74u;
    {
        const bool branch_taken_0x356e74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x356E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E74u;
        // 0x356e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e74) {
            ctx->pc = 0x356EF0u;
            goto label_356ef0;
        }
    }
    ctx->pc = 0x356E7Cu;
    // 0x356e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356e80: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x356E80u;
    {
        const bool branch_taken_0x356e80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x356e80) {
            ctx->pc = 0x356ED0u;
            goto label_356ed0;
        }
    }
    ctx->pc = 0x356E88u;
    // 0x356e88: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x356E88u;
    {
        const bool branch_taken_0x356e88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e88) {
            ctx->pc = 0x356E98u;
            goto label_356e98;
        }
    }
    ctx->pc = 0x356E90u;
    // 0x356e90: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x356E90u;
    {
        const bool branch_taken_0x356e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e90) {
            ctx->pc = 0x3570E8u;
            goto label_3570e8;
        }
    }
    ctx->pc = 0x356E98u;
label_356e98:
    // 0x356e98: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356E98u;
    {
        const bool branch_taken_0x356e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e98) {
            ctx->pc = 0x356EB8u;
            goto label_356eb8;
        }
    }
    ctx->pc = 0x356EA0u;
    // 0x356ea0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x356ea0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x356ea4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x356ea4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x356ea8: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x356EA8u;
    SET_GPR_U32(ctx, 31, 0x356EB0u);
    ctx->pc = 0x356EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356EA8u;
    // 0x356eac: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x356EA8u, 0x356EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356EB0u;
label_356eb0:
    // 0x356eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x356EB0u;
    {
        const bool branch_taken_0x356eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EB0u;
        // 0x356eb4: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356eb0) {
            ctx->pc = 0x356EC0u;
            goto label_356ec0;
        }
    }
    ctx->pc = 0x356EB8u;
label_356eb8:
    // 0x356eb8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x356EB8u;
    SET_GPR_U32(ctx, 31, 0x356EC0u);
    ctx->pc = 0x356EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356EB8u;
    // 0x356ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x356EB8u, 0x356EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356EC0u;
label_356ec0:
    // 0x356ec0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x356ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x356ec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356ec8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x356EC8u;
    {
        const bool branch_taken_0x356ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EC8u;
        // 0x356ecc: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ec8) {
            ctx->pc = 0x3570E8u;
            goto label_3570e8;
        }
    }
    ctx->pc = 0x356ED0u;
label_356ed0:
    // 0x356ed0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x356ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x356ed4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x356ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x356ed8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x356ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x356edc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x356edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x356ee0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x356ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x356ee4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x356ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x356ee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356eec: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x356eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_356ef0:
    // 0x356ef0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x356ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x356ef4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x356ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x356ef8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x356ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x356efc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x356efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x356f00: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x356f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x356f04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x356f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356f08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x356f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x356f0c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x356F0Cu;
    SET_GPR_U32(ctx, 31, 0x356F14u);
    ctx->pc = 0x356F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F0Cu;
    // 0x356f10: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x356F0Cu, 0x356F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F14u;
label_356f14:
    // 0x356f14: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x356f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x356f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f1c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x356F1Cu;
    SET_GPR_U32(ctx, 31, 0x356F24u);
    ctx->pc = 0x356F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F1Cu;
    // 0x356f20: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x356F1Cu, 0x356F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F24u;
label_356f24:
    // 0x356f24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356F24u;
    {
        const bool branch_taken_0x356f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F24u;
        // 0x356f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f24) {
            ctx->pc = 0x356F38u;
            goto label_356f38;
        }
    }
    ctx->pc = 0x356F2Cu;
    // 0x356f2c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x356F2Cu;
    SET_GPR_U32(ctx, 31, 0x356F34u);
    ctx->pc = 0x356F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F2Cu;
    // 0x356f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x356F2Cu, 0x356F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F34u;
label_356f34:
    // 0x356f34: 0x0  nop
    ctx->pc = 0x356f34u;
    // NOP
label_356f38:
    // 0x356f38: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x356f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x356f3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x356f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x356f40: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x356f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x356f44: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x356f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x356f48: 0xc097384  jal         func_25CE10
    ctx->pc = 0x356F48u;
    SET_GPR_U32(ctx, 31, 0x356F50u);
    ctx->pc = 0x356F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F48u;
    // 0x356f4c: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x356F48u, 0x356F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F50u;
label_356f50:
    // 0x356f50: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x356f50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x356f54: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x356f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f5c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x356f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x356f60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x356f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f64: 0xc0c0900  jal         func_302400
    ctx->pc = 0x356F64u;
    SET_GPR_U32(ctx, 31, 0x356F6Cu);
    ctx->pc = 0x356F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F64u;
    // 0x356f68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x356F64u, 0x356F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F6Cu;
label_356f6c:
    // 0x356f6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356F6Cu;
    {
        const bool branch_taken_0x356f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F6Cu;
        // 0x356f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f6c) {
            ctx->pc = 0x356F88u;
            goto label_356f88;
        }
    }
    ctx->pc = 0x356F74u;
    // 0x356f74: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x356F74u;
    SET_GPR_U32(ctx, 31, 0x356F7Cu);
    ctx->pc = 0x356F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F74u;
    // 0x356f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x356F74u, 0x356F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F7Cu;
label_356f7c:
    // 0x356f7c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x356F7Cu;
    {
        const bool branch_taken_0x356f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f7c) {
            ctx->pc = 0x3570E8u;
            goto label_3570e8;
        }
    }
    ctx->pc = 0x356F84u;
    // 0x356f84: 0x0  nop
    ctx->pc = 0x356f84u;
    // NOP
label_356f88:
    // 0x356f88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x356f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x356f8c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x356f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x356f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f94: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x356f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x356f98: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x356f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x356f9c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x356f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x356fa0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x356fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x356fa4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x356fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356fa8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x356FA8u;
    SET_GPR_U32(ctx, 31, 0x356FB0u);
    ctx->pc = 0x356FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FA8u;
    // 0x356fac: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x356FA8u, 0x356FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FB0u;
label_356fb0:
    // 0x356fb0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x356FB0u;
    {
        const bool branch_taken_0x356fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356fb0) {
            ctx->pc = 0x357040u;
            goto label_357040;
        }
    }
    ctx->pc = 0x356FB8u;
    // 0x356fb8: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x356fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x356fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fc0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x356FC0u;
    SET_GPR_U32(ctx, 31, 0x356FC8u);
    ctx->pc = 0x356FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FC0u;
    // 0x356fc4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x356FC0u, 0x356FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FC8u;
label_356fc8:
    // 0x356fc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x356fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x356fcc: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x356FCCu;
    SET_GPR_U32(ctx, 31, 0x356FD4u);
    ctx->pc = 0x356FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FCCu;
    // 0x356fd0: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x356FCCu, 0x356FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FD4u;
label_356fd4:
    // 0x356fd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x356fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x356fd8: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x356FD8u;
    SET_GPR_U32(ctx, 31, 0x356FE0u);
    ctx->pc = 0x356FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FD8u;
    // 0x356fdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x356FD8u, 0x356FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FE0u;
label_356fe0:
    // 0x356fe0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x356fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x356fe4: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x356fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x356fe8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x356fe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x356fec: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x356FECu;
    SET_GPR_U32(ctx, 31, 0x356FF4u);
    ctx->pc = 0x356FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FECu;
    // 0x356ff0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x356FECu, 0x356FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FF4u;
label_356ff4:
    // 0x356ff4: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x356ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x356ff8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x356ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x356ffc: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x356ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x357000: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x357000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x357004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357008: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x357008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x35700c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x35700cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x357010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x357010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357014: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x357014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357018: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x357018u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35701c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35701cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357020: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x357020u;
    SET_GPR_U32(ctx, 31, 0x357028u);
    ctx->pc = 0x357024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357020u;
    // 0x357024: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x357020u, 0x357028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357028u;
label_357028:
    // 0x357028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35702c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35702Cu;
    SET_GPR_U32(ctx, 31, 0x357034u);
    ctx->pc = 0x357030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35702Cu;
    // 0x357030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35702Cu, 0x357034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357034u;
label_357034:
    // 0x357034: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x357034u;
    {
        const bool branch_taken_0x357034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357034) {
            ctx->pc = 0x3570E8u;
            goto label_3570e8;
        }
    }
    ctx->pc = 0x35703Cu;
    // 0x35703c: 0x0  nop
    ctx->pc = 0x35703cu;
    // NOP
label_357040:
    // 0x357040: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x357040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x357044: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x357044u;
    {
        const bool branch_taken_0x357044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357044u;
        // 0x357048: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357044) {
            ctx->pc = 0x357058u;
            goto label_357058;
        }
    }
    ctx->pc = 0x35704Cu;
    // 0x35704c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35704Cu;
    {
        const bool branch_taken_0x35704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35704c) {
            ctx->pc = 0x3570D8u;
            goto label_3570d8;
        }
    }
    ctx->pc = 0x357054u;
    // 0x357054: 0x0  nop
    ctx->pc = 0x357054u;
    // NOP
label_357058:
    // 0x357058: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x357058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35705c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x357060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x357060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x357064: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x357064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x357068: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x35706c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35706Cu;
    {
        const bool branch_taken_0x35706c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35706c) {
            ctx->pc = 0x3570A8u;
            goto label_3570a8;
        }
    }
    ctx->pc = 0x357074u;
    // 0x357074: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x357074u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x357078: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x357078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x35707c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35707Cu;
    {
        const bool branch_taken_0x35707c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35707Cu;
        // 0x357080: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35707c) {
            ctx->pc = 0x3570D0u;
            goto label_3570d0;
        }
    }
    ctx->pc = 0x357084u;
    // 0x357084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357088: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x357088u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35708c: 0x0  nop
    ctx->pc = 0x35708cu;
    // NOP
    // 0x357090: 0x0  nop
    ctx->pc = 0x357090u;
    // NOP
    // 0x357094: 0x2010  mfhi        $a0
    ctx->pc = 0x357094u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x357098: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x357098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35709c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35709Cu;
    {
        const bool branch_taken_0x35709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3570A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35709Cu;
        // 0x3570a0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35709c) {
            ctx->pc = 0x3570D0u;
            goto label_3570d0;
        }
    }
    ctx->pc = 0x3570A4u;
    // 0x3570a4: 0x0  nop
    ctx->pc = 0x3570a4u;
    // NOP
label_3570a8:
    // 0x3570a8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3570a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3570ac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3570acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3570b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3570B0u;
    {
        const bool branch_taken_0x3570b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570b0) {
            ctx->pc = 0x3570D0u;
            goto label_3570d0;
        }
    }
    ctx->pc = 0x3570B8u;
    // 0x3570b8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3570b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3570bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3570bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3570c0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3570c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3570c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3570C4u;
    {
        const bool branch_taken_0x3570c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3570C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570C4u;
        // 0x3570c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3570c4) {
            ctx->pc = 0x3570D8u;
            goto label_3570d8;
        }
    }
    ctx->pc = 0x3570CCu;
    // 0x3570cc: 0x0  nop
    ctx->pc = 0x3570ccu;
    // NOP
label_3570d0:
    // 0x3570d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3570d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3570d4: 0x0  nop
    ctx->pc = 0x3570d4u;
    // NOP
label_3570d8:
    // 0x3570d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3570D8u;
    {
        const bool branch_taken_0x3570d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3570DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570D8u;
        // 0x3570dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3570d8) {
            ctx->pc = 0x3570E8u;
            goto label_3570e8;
        }
    }
    ctx->pc = 0x3570E0u;
    // 0x3570e0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3570E0u;
    SET_GPR_U32(ctx, 31, 0x3570E8u);
    ctx->pc = 0x3570E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3570E0u;
    // 0x3570e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3570E0u, 0x3570E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570E8u;
label_3570e8:
    // 0x3570e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3570e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3570ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3570ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3570f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3570F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570F0u;
        // 0x3570f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570F8u;
}
