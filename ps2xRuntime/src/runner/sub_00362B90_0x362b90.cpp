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

// Function: sub_00362B90
// Address: 0x362b90 - 0x362db0
void sub_00362B90_0x362b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362B90_0x362b90");
#endif

    switch (ctx->pc) {
        case 0x362be0u: goto label_362be0;
        case 0x362bf0u: goto label_362bf0;
        case 0x362c44u: goto label_362c44;
        case 0x362c54u: goto label_362c54;
        case 0x362c64u: goto label_362c64;
        case 0x362c80u: goto label_362c80;
        case 0x362c9cu: goto label_362c9c;
        case 0x362cc4u: goto label_362cc4;
        case 0x362ce4u: goto label_362ce4;
        case 0x362cf0u: goto label_362cf0;
        case 0x362da0u: goto label_362da0;
        default: break;
    }

    ctx->pc = 0x362b90u;

    // 0x362b90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x362b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x362b94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x362b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362ba0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x362ba0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x362ba4: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x362BA4u;
    {
        const bool branch_taken_0x362ba4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x362BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BA4u;
        // 0x362ba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ba4) {
            ctx->pc = 0x362C20u;
            goto label_362c20;
        }
    }
    ctx->pc = 0x362BACu;
    // 0x362bac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362bb0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x362BB0u;
    {
        const bool branch_taken_0x362bb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x362bb0) {
            ctx->pc = 0x362C00u;
            goto label_362c00;
        }
    }
    ctx->pc = 0x362BB8u;
    // 0x362bb8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x362BB8u;
    {
        const bool branch_taken_0x362bb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x362bb8) {
            ctx->pc = 0x362BC8u;
            goto label_362bc8;
        }
    }
    ctx->pc = 0x362BC0u;
    // 0x362bc0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x362BC0u;
    {
        const bool branch_taken_0x362bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362bc0) {
            ctx->pc = 0x362DA0u;
            goto label_362da0;
        }
    }
    ctx->pc = 0x362BC8u;
label_362bc8:
    // 0x362bc8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362BC8u;
    {
        const bool branch_taken_0x362bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x362bc8) {
            ctx->pc = 0x362BE8u;
            goto label_362be8;
        }
    }
    ctx->pc = 0x362BD0u;
    // 0x362bd0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x362bd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x362bd4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x362bd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x362bd8: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x362BD8u;
    SET_GPR_U32(ctx, 31, 0x362BE0u);
    ctx->pc = 0x362BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362BD8u;
    // 0x362bdc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x362BD8u, 0x362BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BE0u;
label_362be0:
    // 0x362be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x362BE0u;
    {
        const bool branch_taken_0x362be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BE0u;
        // 0x362be4: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362be0) {
            ctx->pc = 0x362BF0u;
            goto label_362bf0;
        }
    }
    ctx->pc = 0x362BE8u;
label_362be8:
    // 0x362be8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362BE8u;
    SET_GPR_U32(ctx, 31, 0x362BF0u);
    ctx->pc = 0x362BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362BE8u;
    // 0x362bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362BE8u, 0x362BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BF0u;
label_362bf0:
    // 0x362bf0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x362bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x362bf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362bf8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x362BF8u;
    {
        const bool branch_taken_0x362bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BF8u;
        // 0x362bfc: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362bf8) {
            ctx->pc = 0x362DA0u;
            goto label_362da0;
        }
    }
    ctx->pc = 0x362C00u;
label_362c00:
    // 0x362c00: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x362c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x362c04: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x362c04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x362c08: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x362c08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x362c0c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x362c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x362c10: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x362c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x362c14: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x362c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x362c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x362c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x362c1c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x362c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_362c20:
    // 0x362c20: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x362c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x362c24: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x362c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x362c28: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x362c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x362c2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x362c30: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x362c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x362c34: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x362c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x362c38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x362c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x362c3c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x362C3Cu;
    SET_GPR_U32(ctx, 31, 0x362C44u);
    ctx->pc = 0x362C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C3Cu;
    // 0x362c40: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x362C3Cu, 0x362C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C44u;
label_362c44:
    // 0x362c44: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x362c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x362c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c4c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x362C4Cu;
    SET_GPR_U32(ctx, 31, 0x362C54u);
    ctx->pc = 0x362C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C4Cu;
    // 0x362c50: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x362C4Cu, 0x362C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C54u;
label_362c54:
    // 0x362c54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362C54u;
    {
        const bool branch_taken_0x362c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362C54u;
        // 0x362c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362c54) {
            ctx->pc = 0x362C68u;
            goto label_362c68;
        }
    }
    ctx->pc = 0x362C5Cu;
    // 0x362c5c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362C5Cu;
    SET_GPR_U32(ctx, 31, 0x362C64u);
    ctx->pc = 0x362C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C5Cu;
    // 0x362c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362C5Cu, 0x362C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C64u;
label_362c64:
    // 0x362c64: 0x0  nop
    ctx->pc = 0x362c64u;
    // NOP
label_362c68:
    // 0x362c68: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x362c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x362c6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x362c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x362c70: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x362c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x362c74: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x362c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x362c78: 0xc097384  jal         func_25CE10
    ctx->pc = 0x362C78u;
    SET_GPR_U32(ctx, 31, 0x362C80u);
    ctx->pc = 0x362C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C78u;
    // 0x362c7c: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x362C78u, 0x362C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C80u;
label_362c80:
    // 0x362c80: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x362c80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x362c84: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x362c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x362c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c8c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x362c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x362c90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x362c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c94: 0xc0c0900  jal         func_302400
    ctx->pc = 0x362C94u;
    SET_GPR_U32(ctx, 31, 0x362C9Cu);
    ctx->pc = 0x362C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C94u;
    // 0x362c98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x362C94u, 0x362C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C9Cu;
label_362c9c:
    // 0x362c9c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x362c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x362ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ca4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x362ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x362ca8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x362ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x362cac: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x362cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x362cb0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x362cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x362cb4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x362cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x362cb8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x362cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362cbc: 0xc0c0980  jal         func_302600
    ctx->pc = 0x362CBCu;
    SET_GPR_U32(ctx, 31, 0x362CC4u);
    ctx->pc = 0x362CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CBCu;
    // 0x362cc0: 0x27aa008c  addiu       $t2, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x362CBCu, 0x362CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CC4u;
label_362cc4:
    // 0x362cc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x362CC4u;
    {
        const bool branch_taken_0x362cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362cc4) {
            ctx->pc = 0x362CF8u;
            goto label_362cf8;
        }
    }
    ctx->pc = 0x362CCCu;
    // 0x362ccc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x362cccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x362cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362cd4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x362cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x362cd8: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x362cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x362cdc: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x362CDCu;
    SET_GPR_U32(ctx, 31, 0x362CE4u);
    ctx->pc = 0x362CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CDCu;
    // 0x362ce0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x362CDCu, 0x362CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CE4u;
label_362ce4:
    // 0x362ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ce8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362CE8u;
    SET_GPR_U32(ctx, 31, 0x362CF0u);
    ctx->pc = 0x362CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CE8u;
    // 0x362cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362CE8u, 0x362CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CF0u;
label_362cf0:
    // 0x362cf0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x362CF0u;
    {
        const bool branch_taken_0x362cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362cf0) {
            ctx->pc = 0x362DA0u;
            goto label_362da0;
        }
    }
    ctx->pc = 0x362CF8u;
label_362cf8:
    // 0x362cf8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x362cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x362cfc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x362CFCu;
    {
        const bool branch_taken_0x362cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x362D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362CFCu;
        // 0x362d00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362cfc) {
            ctx->pc = 0x362D10u;
            goto label_362d10;
        }
    }
    ctx->pc = 0x362D04u;
    // 0x362d04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x362D04u;
    {
        const bool branch_taken_0x362d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d04) {
            ctx->pc = 0x362D90u;
            goto label_362d90;
        }
    }
    ctx->pc = 0x362D0Cu;
    // 0x362d0c: 0x0  nop
    ctx->pc = 0x362d0cu;
    // NOP
label_362d10:
    // 0x362d10: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x362d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x362d14: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x362d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x362d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x362d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x362d1c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x362d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x362d20: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x362d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x362d24: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x362D24u;
    {
        const bool branch_taken_0x362d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x362d24) {
            ctx->pc = 0x362D60u;
            goto label_362d60;
        }
    }
    ctx->pc = 0x362D2Cu;
    // 0x362d2c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x362d2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x362d30: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x362d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x362d34: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x362D34u;
    {
        const bool branch_taken_0x362d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x362D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D34u;
        // 0x362d38: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d34) {
            ctx->pc = 0x362D88u;
            goto label_362d88;
        }
    }
    ctx->pc = 0x362D3Cu;
    // 0x362d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362d40: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x362d40u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x362d44: 0x0  nop
    ctx->pc = 0x362d44u;
    // NOP
    // 0x362d48: 0x0  nop
    ctx->pc = 0x362d48u;
    // NOP
    // 0x362d4c: 0x2010  mfhi        $a0
    ctx->pc = 0x362d4cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x362d50: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x362d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x362d54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x362D54u;
    {
        const bool branch_taken_0x362d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D54u;
        // 0x362d58: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d54) {
            ctx->pc = 0x362D88u;
            goto label_362d88;
        }
    }
    ctx->pc = 0x362D5Cu;
    // 0x362d5c: 0x0  nop
    ctx->pc = 0x362d5cu;
    // NOP
label_362d60:
    // 0x362d60: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x362d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x362d64: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x362d64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x362d68: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362D68u;
    {
        const bool branch_taken_0x362d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x362d68) {
            ctx->pc = 0x362D88u;
            goto label_362d88;
        }
    }
    ctx->pc = 0x362D70u;
    // 0x362d70: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x362d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x362d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362d78: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x362d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x362d7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x362D7Cu;
    {
        const bool branch_taken_0x362d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D7Cu;
        // 0x362d80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d7c) {
            ctx->pc = 0x362D90u;
            goto label_362d90;
        }
    }
    ctx->pc = 0x362D84u;
    // 0x362d84: 0x0  nop
    ctx->pc = 0x362d84u;
    // NOP
label_362d88:
    // 0x362d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362d8c: 0x0  nop
    ctx->pc = 0x362d8cu;
    // NOP
label_362d90:
    // 0x362d90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x362D90u;
    {
        const bool branch_taken_0x362d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x362D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D90u;
        // 0x362d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d90) {
            ctx->pc = 0x362DA0u;
            goto label_362da0;
        }
    }
    ctx->pc = 0x362D98u;
    // 0x362d98: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362D98u;
    SET_GPR_U32(ctx, 31, 0x362DA0u);
    ctx->pc = 0x362D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362D98u;
    // 0x362d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362D98u, 0x362DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DA0u;
label_362da0:
    // 0x362da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362da8: 0x3e00008  jr          $ra
    ctx->pc = 0x362DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DA8u;
        // 0x362dac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362DB0u;
}
