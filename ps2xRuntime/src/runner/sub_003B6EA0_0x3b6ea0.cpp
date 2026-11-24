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

// Function: sub_003B6EA0
// Address: 0x3b6ea0 - 0x3b7624
void sub_003B6EA0_0x3b6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6EA0_0x3b6ea0");
#endif

    switch (ctx->pc) {
        case 0x3b6f00u: goto label_3b6f00;
        case 0x3b6f10u: goto label_3b6f10;
        case 0x3b6f64u: goto label_3b6f64;
        case 0x3b6f7cu: goto label_3b6f7c;
        case 0x3b6f88u: goto label_3b6f88;
        case 0x3b6f9cu: goto label_3b6f9c;
        case 0x3b6facu: goto label_3b6fac;
        case 0x3b6fbcu: goto label_3b6fbc;
        case 0x3b6fccu: goto label_3b6fcc;
        case 0x3b6fdcu: goto label_3b6fdc;
        case 0x3b7070u: goto label_3b7070;
        case 0x3b70d4u: goto label_3b70d4;
        case 0x3b7110u: goto label_3b7110;
        case 0x3b7128u: goto label_3b7128;
        case 0x3b7138u: goto label_3b7138;
        case 0x3b7220u: goto label_3b7220;
        case 0x3b7238u: goto label_3b7238;
        case 0x3b7248u: goto label_3b7248;
        case 0x3b7250u: goto label_3b7250;
        case 0x3b728cu: goto label_3b728c;
        case 0x3b730cu: goto label_3b730c;
        case 0x3b737cu: goto label_3b737c;
        case 0x3b745cu: goto label_3b745c;
        case 0x3b7474u: goto label_3b7474;
        case 0x3b74acu: goto label_3b74ac;
        case 0x3b74e0u: goto label_3b74e0;
        case 0x3b74f0u: goto label_3b74f0;
        case 0x3b755cu: goto label_3b755c;
        case 0x3b7608u: goto label_3b7608;
        default: break;
    }

    ctx->pc = 0x3b6ea0u;

    // 0x3b6ea0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3b6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3b6ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b6ea8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b6ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b6eac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b6eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b6eb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b6eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b6eb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b6eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b6eb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b6eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6ebc: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x3b6ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3b6ec0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3b6ec0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3b6ec4: 0x102001d0  beqz        $at, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x3B6EC4u;
    {
        const bool branch_taken_0x3b6ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EC4u;
        // 0x3b6ec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ec4) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B6ECCu;
    // 0x3b6ecc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b6eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b6ed0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b6ed4: 0x24a52bc0  addiu       $a1, $a1, 0x2BC0
    ctx->pc = 0x3b6ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11200));
    // 0x3b6ed8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b6edc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b6ee0: 0x600008  jr          $v1
    ctx->pc = 0x3B6EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B6EE8u: goto label_3b6ee8;
            case 0x3B6F20u: goto label_3b6f20;
            case 0x3B6F40u: goto label_3b6f40;
            case 0x3B7228u: goto label_3b7228;
            case 0x3B72B0u: goto label_3b72b0;
            case 0x3B7448u: goto label_3b7448;
            case 0x3B74D0u: goto label_3b74d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6EE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B6EE8u;
label_3b6ee8:
    // 0x3b6ee8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6EE8u;
    {
        const bool branch_taken_0x3b6ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6ee8) {
            ctx->pc = 0x3B6F08u;
            goto label_3b6f08;
        }
    }
    ctx->pc = 0x3B6EF0u;
    // 0x3b6ef0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3b6ef0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3b6ef4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3b6ef4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b6ef8: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x3B6EF8u;
    SET_GPR_U32(ctx, 31, 0x3B6F00u);
    ctx->pc = 0x3B6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6EF8u;
    // 0x3b6efc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9410u, 0x3B6EF8u, 0x3B6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F00u;
label_3b6f00:
    // 0x3b6f00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6F00u;
    {
        const bool branch_taken_0x3b6f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F00u;
        // 0x3b6f04: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f00) {
            ctx->pc = 0x3B6F10u;
            goto label_3b6f10;
        }
    }
    ctx->pc = 0x3B6F08u;
label_3b6f08:
    // 0x3b6f08: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B6F08u;
    SET_GPR_U32(ctx, 31, 0x3B6F10u);
    ctx->pc = 0x3B6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F08u;
    // 0x3b6f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B6F08u, 0x3B6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F10u;
label_3b6f10:
    // 0x3b6f10: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3b6f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b6f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b6f18: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x3B6F18u;
    {
        const bool branch_taken_0x3b6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F18u;
        // 0x3b6f1c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f18) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B6F20u;
label_3b6f20:
    // 0x3b6f20: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3b6f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3b6f24: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3b6f24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6f28: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3b6f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b6f2c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3b6f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6f30: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3b6f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6f34: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3b6f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b6f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b6f3c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3b6f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b6f40:
    // 0x3b6f40: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b6f44: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3b6f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3b6f48: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3b6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b6f4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b6f50: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3b6f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3b6f54: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3b6f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b6f58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3b6f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3b6f5c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3B6F5Cu;
    SET_GPR_U32(ctx, 31, 0x3B6F64u);
    ctx->pc = 0x3B6F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F5Cu;
    // 0x3b6f60: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3B6F5Cu, 0x3B6F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F64u;
label_3b6f64:
    // 0x3b6f64: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b6f68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b6f6c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3b6f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3b6f70: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3b6f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3b6f74: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3B6F74u;
    SET_GPR_U32(ctx, 31, 0x3B6F7Cu);
    ctx->pc = 0x3B6F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F74u;
    // 0x3b6f78: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3B6F74u, 0x3B6F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F7Cu;
label_3b6f7c:
    // 0x3b6f7c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3b6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3b6f80: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3B6F80u;
    SET_GPR_U32(ctx, 31, 0x3B6F88u);
    ctx->pc = 0x3B6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F80u;
    // 0x3b6f84: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3B6F80u, 0x3B6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F88u;
label_3b6f88:
    // 0x3b6f88: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3b6f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3b6f8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3b6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3b6f90: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b6f94: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3B6F94u;
    SET_GPR_U32(ctx, 31, 0x3B6F9Cu);
    ctx->pc = 0x3B6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F94u;
    // 0x3b6f98: 0x24c62bb0  addiu       $a2, $a2, 0x2BB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3B6F94u, 0x3B6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F9Cu;
label_3b6f9c:
    // 0x3b6f9c: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3b6f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3b6fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6fa4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B6FA4u;
    SET_GPR_U32(ctx, 31, 0x3B6FACu);
    ctx->pc = 0x3B6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FA4u;
    // 0x3b6fa8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B6FA4u, 0x3B6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FACu;
label_3b6fac:
    // 0x3b6fac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6FACu;
    {
        const bool branch_taken_0x3b6fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FACu;
        // 0x3b6fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6fac) {
            ctx->pc = 0x3B6FC0u;
            goto label_3b6fc0;
        }
    }
    ctx->pc = 0x3B6FB4u;
    // 0x3b6fb4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B6FB4u;
    SET_GPR_U32(ctx, 31, 0x3B6FBCu);
    ctx->pc = 0x3B6FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FB4u;
    // 0x3b6fb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B6FB4u, 0x3B6FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FBCu;
label_3b6fbc:
    // 0x3b6fbc: 0x0  nop
    ctx->pc = 0x3b6fbcu;
    // NOP
label_3b6fc0:
    // 0x3b6fc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3b6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3b6fc4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3B6FC4u;
    SET_GPR_U32(ctx, 31, 0x3B6FCCu);
    ctx->pc = 0x3B6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FC4u;
    // 0x3b6fc8: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3B6FC4u, 0x3B6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FCCu;
label_3b6fcc:
    // 0x3b6fcc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b6fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b6fd0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3b6fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3b6fd4: 0xc076654  jal         func_1D9950
    ctx->pc = 0x3B6FD4u;
    SET_GPR_U32(ctx, 31, 0x3B6FDCu);
    ctx->pc = 0x3B6FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FD4u;
    // 0x3b6fd8: 0x24a55c70  addiu       $a1, $a1, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x3B6FD4u, 0x3B6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FDCu;
label_3b6fdc:
    // 0x3b6fdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b6fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b6fe0: 0x0  nop
    ctx->pc = 0x3b6fe0u;
    // NOP
    // 0x3b6fe4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b6fe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b6fe8: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x3B6FE8u;
    {
        const bool branch_taken_0x3b6fe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b6fe8) {
            ctx->pc = 0x3B7178u;
            goto label_3b7178;
        }
    }
    ctx->pc = 0x3B6FF0u;
    // 0x3b6ff0: 0xc6010564  lwc1        $f1, 0x564($s0)
    ctx->pc = 0x3b6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b6ff4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3b6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3b6ff8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b6ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b6ffc: 0xc6030568  lwc1        $f3, 0x568($s0)
    ctx->pc = 0x3b6ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b7000: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3b7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b7004: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b7004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b7008: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3b7008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3b700c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b700cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b7010: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x3B7010u;
    {
        const bool branch_taken_0x3b7010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7010u;
        // 0x3b7014: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7010) {
            ctx->pc = 0x3B7178u;
            goto label_3b7178;
        }
    }
    ctx->pc = 0x3B7018u;
    // 0x3b7018: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x3b7018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3b701c: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3b701cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x3b7020: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x3b7020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3b7024: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x3b7024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3b7028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b702c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b7030: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7034: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b7034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x3b7038: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3b7038u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3b703c: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x3b703cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x3b7040: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7044: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3b7044u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3b7048: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3b7048u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3b704c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b704cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7050: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b7050u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b7054: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b7054u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b7058: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b7058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b705c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b705cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b7060: 0x92060560  lbu         $a2, 0x560($s0)
    ctx->pc = 0x3b7060u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x3b7064: 0xc60c055c  lwc1        $f12, 0x55C($s0)
    ctx->pc = 0x3b7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b7068: 0xc0c0960  jal         func_302580
    ctx->pc = 0x3B7068u;
    SET_GPR_U32(ctx, 31, 0x3B7070u);
    ctx->pc = 0x3B706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7068u;
    // 0x3b706c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3B7068u, 0x3B7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7070u;
label_3b7070:
    // 0x3b7070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7070u;
    {
        const bool branch_taken_0x3b7070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7070u;
        // 0x3b7074: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7070) {
            ctx->pc = 0x3B7080u;
            goto label_3b7080;
        }
    }
    ctx->pc = 0x3B7078u;
    // 0x3b7078: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x3B7078u;
    {
        const bool branch_taken_0x3b7078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7078u;
        // 0x3b707c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7078) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7080u;
label_3b7080:
    // 0x3b7080: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7084: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3b7084u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3b7088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b708c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b7090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b7090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7094: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7098: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b7098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x3b709c: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3b709cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3b70a0: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x3b70a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x3b70a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b70a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b70a8: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3b70a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3b70ac: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3b70acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3b70b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b70b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b70b4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b70b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b70b8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b70b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b70bc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b70bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b70c0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b70c4: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3b70c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3b70c8: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3b70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b70cc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B70CCu;
    SET_GPR_U32(ctx, 31, 0x3B70D4u);
    ctx->pc = 0x3B70D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B70CCu;
    // 0x3b70d0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B70CCu, 0x3B70D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B70D4u;
label_3b70d4:
    // 0x3b70d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B70D4u;
    {
        const bool branch_taken_0x3b70d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70D4u;
        // 0x3b70d8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70d4) {
            ctx->pc = 0x3B70E8u;
            goto label_3b70e8;
        }
    }
    ctx->pc = 0x3B70DCu;
    // 0x3b70dc: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x3B70DCu;
    {
        const bool branch_taken_0x3b70dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70DCu;
        // 0x3b70e0: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70dc) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B70E4u;
    // 0x3b70e4: 0x0  nop
    ctx->pc = 0x3b70e4u;
    // NOP
label_3b70e8:
    // 0x3b70e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b70ec: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3b70ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3b70f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b70f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b70f4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3b70f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b70f8: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3b70f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3b70fc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x3b70fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3b7100: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3b7100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b7104: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3b7104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7108: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3B7108u;
    SET_GPR_U32(ctx, 31, 0x3B7110u);
    ctx->pc = 0x3B710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7108u;
    // 0x3b710c: 0x27aa00dc  addiu       $t2, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3B7108u, 0x3B7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7110u;
label_3b7110:
    // 0x3b7110: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B7110u;
    {
        const bool branch_taken_0x3b7110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7110) {
            ctx->pc = 0x3B7178u;
            goto label_3b7178;
        }
    }
    ctx->pc = 0x3B7118u;
    // 0x3b7118: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3b7118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3b711c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7120: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B7120u;
    SET_GPR_U32(ctx, 31, 0x3B7128u);
    ctx->pc = 0x3B7124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7120u;
    // 0x3b7124: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B7120u, 0x3B7128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7128u;
label_3b7128:
    // 0x3b7128: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b7128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b712c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b7130: 0xc076654  jal         func_1D9950
    ctx->pc = 0x3B7130u;
    SET_GPR_U32(ctx, 31, 0x3B7138u);
    ctx->pc = 0x3B7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7130u;
    // 0x3b7134: 0x24a55c70  addiu       $a1, $a1, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x3B7130u, 0x3B7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7138u;
label_3b7138:
    // 0x3b7138: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x3b7138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x3b713c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3b713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3b7140: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b7140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b7144: 0x0  nop
    ctx->pc = 0x3b7144u;
    // NOP
    // 0x3b7148: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b714c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3B714Cu;
    {
        const bool branch_taken_0x3b714c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B714Cu;
        // 0x3b7150: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b714c) {
            ctx->pc = 0x3B7160u;
            goto label_3b7160;
        }
    }
    ctx->pc = 0x3B7154u;
    // 0x3b7154: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7154u;
    {
        const bool branch_taken_0x3b7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7154u;
        // 0x3b7158: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7154) {
            ctx->pc = 0x3B7170u;
            goto label_3b7170;
        }
    }
    ctx->pc = 0x3B715Cu;
    // 0x3b715c: 0x0  nop
    ctx->pc = 0x3b715cu;
    // NOP
label_3b7160:
    // 0x3b7160: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3b7160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b7164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b7168: 0xa2030521  sb          $v1, 0x521($s0)
    ctx->pc = 0x3b7168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b716c: 0x0  nop
    ctx->pc = 0x3b716cu;
    // NOP
label_3b7170:
    // 0x3b7170: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x3B7170u;
    {
        const bool branch_taken_0x3b7170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7170) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7178u;
label_3b7178:
    // 0x3b7178: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3b7178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3b717c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B717Cu;
    {
        const bool branch_taken_0x3b717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B717Cu;
        // 0x3b7180: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b717c) {
            ctx->pc = 0x3B7190u;
            goto label_3b7190;
        }
    }
    ctx->pc = 0x3B7184u;
    // 0x3b7184: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B7184u;
    {
        const bool branch_taken_0x3b7184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7184) {
            ctx->pc = 0x3B7210u;
            goto label_3b7210;
        }
    }
    ctx->pc = 0x3B718Cu;
    // 0x3b718c: 0x0  nop
    ctx->pc = 0x3b718cu;
    // NOP
label_3b7190:
    // 0x3b7190: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3b7190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b7194: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b7194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b7198: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b7198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b719c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b719cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b71a0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3b71a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3b71a4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B71A4u;
    {
        const bool branch_taken_0x3b71a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b71a4) {
            ctx->pc = 0x3B71E0u;
            goto label_3b71e0;
        }
    }
    ctx->pc = 0x3B71ACu;
    // 0x3b71ac: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3b71acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b71b0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b71b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b71b4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B71B4u;
    {
        const bool branch_taken_0x3b71b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71B4u;
        // 0x3b71b8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b71b4) {
            ctx->pc = 0x3B7208u;
            goto label_3b7208;
        }
    }
    ctx->pc = 0x3B71BCu;
    // 0x3b71bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b71c0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b71c0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b71c4: 0x0  nop
    ctx->pc = 0x3b71c4u;
    // NOP
    // 0x3b71c8: 0x0  nop
    ctx->pc = 0x3b71c8u;
    // NOP
    // 0x3b71cc: 0x2010  mfhi        $a0
    ctx->pc = 0x3b71ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b71d0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b71d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b71d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B71D4u;
    {
        const bool branch_taken_0x3b71d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71D4u;
        // 0x3b71d8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b71d4) {
            ctx->pc = 0x3B7208u;
            goto label_3b7208;
        }
    }
    ctx->pc = 0x3B71DCu;
    // 0x3b71dc: 0x0  nop
    ctx->pc = 0x3b71dcu;
    // NOP
label_3b71e0:
    // 0x3b71e0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b71e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b71e4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b71e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b71e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B71E8u;
    {
        const bool branch_taken_0x3b71e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b71e8) {
            ctx->pc = 0x3B7208u;
            goto label_3b7208;
        }
    }
    ctx->pc = 0x3B71F0u;
    // 0x3b71f0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b71f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b71f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b71f8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3b71f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b71fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B71FCu;
    {
        const bool branch_taken_0x3b71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71FCu;
        // 0x3b7200: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b71fc) {
            ctx->pc = 0x3B7210u;
            goto label_3b7210;
        }
    }
    ctx->pc = 0x3B7204u;
    // 0x3b7204: 0x0  nop
    ctx->pc = 0x3b7204u;
    // NOP
label_3b7208:
    // 0x3b7208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b720c: 0x0  nop
    ctx->pc = 0x3b720cu;
    // NOP
label_3b7210:
    // 0x3b7210: 0x146000fd  bnez        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x3B7210u;
    {
        const bool branch_taken_0x3b7210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7210u;
        // 0x3b7214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7210) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7218u;
    // 0x3b7218: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B7218u;
    SET_GPR_U32(ctx, 31, 0x3B7220u);
    ctx->pc = 0x3B721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7218u;
    // 0x3b721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B7218u, 0x3B7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7220u;
label_3b7220:
    // 0x3b7220: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x3B7220u;
    {
        const bool branch_taken_0x3b7220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7220) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7228u;
label_3b7228:
    // 0x3b7228: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3b7228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3b722c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3b722cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b7230: 0xc0a9ab4  jal         func_2A6AD0
    ctx->pc = 0x3B7230u;
    SET_GPR_U32(ctx, 31, 0x3B7238u);
    ctx->pc = 0x3B7234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7230u;
    // 0x3b7234: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6AD0u, 0x3B7230u, 0x3B7238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7238u;
label_3b7238:
    // 0x3b7238: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3b7238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3b723c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3b723cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b7240: 0xc0a9b54  jal         func_2A6D50
    ctx->pc = 0x3B7240u;
    SET_GPR_U32(ctx, 31, 0x3B7248u);
    ctx->pc = 0x3B7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7240u;
    // 0x3b7244: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D50u, 0x3B7240u, 0x3B7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7248u;
label_3b7248:
    // 0x3b7248: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3B7248u;
    SET_GPR_U32(ctx, 31, 0x3B7250u);
    ctx->pc = 0x3B724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7248u;
    // 0x3b724c: 0x8e040550  lw          $a0, 0x550($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3B7248u, 0x3B7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7250u;
label_3b7250:
    // 0x3b7250: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x3B7250u;
    {
        const bool branch_taken_0x3b7250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7250u;
        // 0x3b7254: 0xae000550  sw          $zero, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7250) {
            ctx->pc = 0x3B7290u;
            goto label_3b7290;
        }
    }
    ctx->pc = 0x3B7258u;
    // 0x3b7258: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3b7258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b725c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b725cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b7260: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x3b7260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x3b7264: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b7264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b7268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b7268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b726c: 0x34455902  ori         $a1, $v0, 0x5902
    ctx->pc = 0x3b726cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22786);
    // 0x3b7270: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3b7270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b7274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b7274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7278: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b7278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b727c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b727cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b7280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7284: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B7284u;
    SET_GPR_U32(ctx, 31, 0x3B728Cu);
    ctx->pc = 0x3B7288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7284u;
    // 0x3b7288: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B7284u, 0x3B728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B728Cu;
label_3b728c:
    // 0x3b728c: 0x0  nop
    ctx->pc = 0x3b728cu;
    // NOP
label_3b7290:
    // 0x3b7290: 0x86020528  lh          $v0, 0x528($s0)
    ctx->pc = 0x3b7290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x3b7294: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3b7294u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b7298: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3b7298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b729c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3b729cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b72a0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3b72a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b72a4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3b72a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b72a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b72ac: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3b72acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b72b0:
    // 0x3b72b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b72b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b72b4: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3b72b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3b72b8: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x3b72b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3b72bc: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x3b72bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3b72c0: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x3b72c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3b72c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b72c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b72c8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b72cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b72ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b72d0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x3b72d4: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3b72d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3b72d8: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x3b72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x3b72dc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b72dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b72e0: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3b72e0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3b72e4: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3b72e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3b72e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b72e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b72ec: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b72ecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b72f0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b72f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b72f4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b72f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b72f8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b72f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b72fc: 0x92060560  lbu         $a2, 0x560($s0)
    ctx->pc = 0x3b72fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x3b7300: 0xc60c055c  lwc1        $f12, 0x55C($s0)
    ctx->pc = 0x3b7300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b7304: 0xc0c0960  jal         func_302580
    ctx->pc = 0x3B7304u;
    SET_GPR_U32(ctx, 31, 0x3B730Cu);
    ctx->pc = 0x3B7308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7304u;
    // 0x3b7308: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3B7304u, 0x3B730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B730Cu;
label_3b730c:
    // 0x3b730c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B730Cu;
    {
        const bool branch_taken_0x3b730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b730c) {
            ctx->pc = 0x3B7328u;
            goto label_3b7328;
        }
    }
    ctx->pc = 0x3B7314u;
    // 0x3b7314: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3b7314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b7318: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b7318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b731c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x3B731Cu;
    {
        const bool branch_taken_0x3b731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B731Cu;
        // 0x3b7320: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b731c) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7324u;
    // 0x3b7324: 0x0  nop
    ctx->pc = 0x3b7324u;
    // NOP
label_3b7328:
    // 0x3b7328: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b732c: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3b732cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3b7330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7334: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b7334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b7338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b7338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b733c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b733cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7340: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b7340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x3b7344: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3b7344u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3b7348: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x3b7348u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x3b734c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7350: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3b7350u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3b7354: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3b7354u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3b7358: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b735c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b735cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b7360: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b7360u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b7364: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b7364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b7368: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3b7368u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3b736c: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3b736cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3b7370: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3b7370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b7374: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B7374u;
    SET_GPR_U32(ctx, 31, 0x3B737Cu);
    ctx->pc = 0x3B7378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7374u;
    // 0x3b7378: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B7374u, 0x3B737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B737Cu;
label_3b737c:
    // 0x3b737c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B737Cu;
    {
        const bool branch_taken_0x3b737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b737c) {
            ctx->pc = 0x3B7398u;
            goto label_3b7398;
        }
    }
    ctx->pc = 0x3B7384u;
    // 0x3b7384: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3b7384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b7388: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b7388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b738c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3B738Cu;
    {
        const bool branch_taken_0x3b738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B738Cu;
        // 0x3b7390: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b738c) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7394u;
    // 0x3b7394: 0x0  nop
    ctx->pc = 0x3b7394u;
    // NOP
label_3b7398:
    // 0x3b7398: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3b7398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3b739c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B739Cu;
    {
        const bool branch_taken_0x3b739c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B739Cu;
        // 0x3b73a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b739c) {
            ctx->pc = 0x3B73B0u;
            goto label_3b73b0;
        }
    }
    ctx->pc = 0x3B73A4u;
    // 0x3b73a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B73A4u;
    {
        const bool branch_taken_0x3b73a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b73a4) {
            ctx->pc = 0x3B7430u;
            goto label_3b7430;
        }
    }
    ctx->pc = 0x3B73ACu;
    // 0x3b73ac: 0x0  nop
    ctx->pc = 0x3b73acu;
    // NOP
label_3b73b0:
    // 0x3b73b0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3b73b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b73b4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b73b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b73b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b73bc: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b73bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b73c0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3b73c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3b73c4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B73C4u;
    {
        const bool branch_taken_0x3b73c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b73c4) {
            ctx->pc = 0x3B7400u;
            goto label_3b7400;
        }
    }
    ctx->pc = 0x3B73CCu;
    // 0x3b73cc: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3b73ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b73d0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b73d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b73d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B73D4u;
    {
        const bool branch_taken_0x3b73d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73D4u;
        // 0x3b73d8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b73d4) {
            ctx->pc = 0x3B7428u;
            goto label_3b7428;
        }
    }
    ctx->pc = 0x3B73DCu;
    // 0x3b73dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b73dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b73e0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b73e0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b73e4: 0x0  nop
    ctx->pc = 0x3b73e4u;
    // NOP
    // 0x3b73e8: 0x0  nop
    ctx->pc = 0x3b73e8u;
    // NOP
    // 0x3b73ec: 0x2010  mfhi        $a0
    ctx->pc = 0x3b73ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b73f0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b73f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b73f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B73F4u;
    {
        const bool branch_taken_0x3b73f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73F4u;
        // 0x3b73f8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b73f4) {
            ctx->pc = 0x3B7428u;
            goto label_3b7428;
        }
    }
    ctx->pc = 0x3B73FCu;
    // 0x3b73fc: 0x0  nop
    ctx->pc = 0x3b73fcu;
    // NOP
label_3b7400:
    // 0x3b7400: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b7400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b7404: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b7404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b7408: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7408u;
    {
        const bool branch_taken_0x3b7408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7408) {
            ctx->pc = 0x3B7428u;
            goto label_3b7428;
        }
    }
    ctx->pc = 0x3B7410u;
    // 0x3b7410: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b7410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b7414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7418: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3b7418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b741c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B741Cu;
    {
        const bool branch_taken_0x3b741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B741Cu;
        // 0x3b7420: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b741c) {
            ctx->pc = 0x3B7430u;
            goto label_3b7430;
        }
    }
    ctx->pc = 0x3B7424u;
    // 0x3b7424: 0x0  nop
    ctx->pc = 0x3b7424u;
    // NOP
label_3b7428:
    // 0x3b7428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b742c: 0x0  nop
    ctx->pc = 0x3b742cu;
    // NOP
label_3b7430:
    // 0x3b7430: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x3B7430u;
    {
        const bool branch_taken_0x3b7430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7430) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7438u;
    // 0x3b7438: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3b7438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b743c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b7440: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3B7440u;
    {
        const bool branch_taken_0x3b7440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7440u;
        // 0x3b7444: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7440) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7448u;
label_3b7448:
    // 0x3b7448: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b7448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b744c: 0xa2020558  sb          $v0, 0x558($s0)
    ctx->pc = 0x3b744cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b7450: 0xa600053c  sh          $zero, 0x53C($s0)
    ctx->pc = 0x3b7450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b7454: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3B7454u;
    SET_GPR_U32(ctx, 31, 0x3B745Cu);
    ctx->pc = 0x3B7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7454u;
    // 0x3b7458: 0x8e040550  lw          $a0, 0x550($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3B7454u, 0x3B745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B745Cu;
label_3b745c:
    // 0x3b745c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B745Cu;
    {
        const bool branch_taken_0x3b745c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B745Cu;
        // 0x3b7460: 0xae000550  sw          $zero, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b745c) {
            ctx->pc = 0x3B74B0u;
            goto label_3b74b0;
        }
    }
    ctx->pc = 0x3B7464u;
    // 0x3b7464: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3b7464u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3b7468: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3b7468u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b746c: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3B746Cu;
    SET_GPR_U32(ctx, 31, 0x3B7474u);
    ctx->pc = 0x3B7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B746Cu;
    // 0x3b7470: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3B746Cu, 0x3B7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7474u;
label_3b7474:
    // 0x3b7474: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x3b7474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x3b7478: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b7478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b747c: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3b747cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b7480: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x3b7480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x3b7484: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b7484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b7488: 0x34455902  ori         $a1, $v0, 0x5902
    ctx->pc = 0x3b7488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22786);
    // 0x3b748c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b748cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7490: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3b7490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b7494: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b7494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b7498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b749c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b749cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b74a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b74a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b74a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B74A4u;
    SET_GPR_U32(ctx, 31, 0x3B74ACu);
    ctx->pc = 0x3B74A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B74A4u;
    // 0x3b74a8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B74A4u, 0x3B74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74ACu;
label_3b74ac:
    // 0x3b74ac: 0x0  nop
    ctx->pc = 0x3b74acu;
    // NOP
label_3b74b0:
    // 0x3b74b0: 0x8602052a  lh          $v0, 0x52A($s0)
    ctx->pc = 0x3b74b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1322)));
    // 0x3b74b4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3b74b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b74b8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3b74b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b74bc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3b74bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b74c0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3b74c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b74c4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3b74c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b74c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b74cc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3b74ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b74d0:
    // 0x3b74d0: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3b74d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3b74d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b74d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b74d8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B74D8u;
    SET_GPR_U32(ctx, 31, 0x3B74E0u);
    ctx->pc = 0x3B74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B74D8u;
    // 0x3b74dc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B74D8u, 0x3B74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74E0u;
label_3b74e0:
    // 0x3b74e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B74E0u;
    {
        const bool branch_taken_0x3b74e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74E0u;
        // 0x3b74e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b74e0) {
            ctx->pc = 0x3B74F0u;
            goto label_3b74f0;
        }
    }
    ctx->pc = 0x3B74E8u;
    // 0x3b74e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B74E8u;
    SET_GPR_U32(ctx, 31, 0x3B74F0u);
    ctx->pc = 0x3B74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B74E8u;
    // 0x3b74ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B74E8u, 0x3B74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74F0u;
label_3b74f0:
    // 0x3b74f0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b74f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b74f4: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B74F4u;
    {
        const bool branch_taken_0x3b74f4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3B74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74F4u;
        // 0x3b74f8: 0x28610024  slti        $at, $v1, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b74f4) {
            ctx->pc = 0x3B7560u;
            goto label_3b7560;
        }
    }
    ctx->pc = 0x3B74FCu;
    // 0x3b74fc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B74FCu;
    {
        const bool branch_taken_0x3b74fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b74fc) {
            ctx->pc = 0x3B7560u;
            goto label_3b7560;
        }
    }
    ctx->pc = 0x3B7504u;
    // 0x3b7504: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7508: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x3b7508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3b750c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3b750cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3b7510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7514: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b7514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b7518: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b7518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b751c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b751cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7520: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x3b7520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x3b7524: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b7524u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3b7528: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b752c: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x3b752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x3b7530: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b7530u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3b7534: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b7534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b7538: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3b7538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3b753c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b753cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b7540: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b7540u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b7544: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b7544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b7548: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b7548u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b754c: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3b754cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3b7550: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3b7550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b7554: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B7554u;
    SET_GPR_U32(ctx, 31, 0x3B755Cu);
    ctx->pc = 0x3B7558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7554u;
    // 0x3b7558: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B7554u, 0x3B755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B755Cu;
label_3b755c:
    // 0x3b755c: 0x0  nop
    ctx->pc = 0x3b755cu;
    // NOP
label_3b7560:
    // 0x3b7560: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3b7560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3b7564: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7564u;
    {
        const bool branch_taken_0x3b7564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7564u;
        // 0x3b7568: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7564) {
            ctx->pc = 0x3B7578u;
            goto label_3b7578;
        }
    }
    ctx->pc = 0x3B756Cu;
    // 0x3b756c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B756Cu;
    {
        const bool branch_taken_0x3b756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b756c) {
            ctx->pc = 0x3B75F8u;
            goto label_3b75f8;
        }
    }
    ctx->pc = 0x3B7574u;
    // 0x3b7574: 0x0  nop
    ctx->pc = 0x3b7574u;
    // NOP
label_3b7578:
    // 0x3b7578: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3b7578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b757c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b7580: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b7584: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b7584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b7588: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3b7588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3b758c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B758Cu;
    {
        const bool branch_taken_0x3b758c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b758c) {
            ctx->pc = 0x3B75C8u;
            goto label_3b75c8;
        }
    }
    ctx->pc = 0x3B7594u;
    // 0x3b7594: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3b7594u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b7598: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b7598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b759c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B759Cu;
    {
        const bool branch_taken_0x3b759c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B759Cu;
        // 0x3b75a0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b759c) {
            ctx->pc = 0x3B75F0u;
            goto label_3b75f0;
        }
    }
    ctx->pc = 0x3B75A4u;
    // 0x3b75a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b75a8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b75a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b75ac: 0x0  nop
    ctx->pc = 0x3b75acu;
    // NOP
    // 0x3b75b0: 0x0  nop
    ctx->pc = 0x3b75b0u;
    // NOP
    // 0x3b75b4: 0x2010  mfhi        $a0
    ctx->pc = 0x3b75b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b75b8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b75b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b75bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B75BCu;
    {
        const bool branch_taken_0x3b75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75BCu;
        // 0x3b75c0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b75bc) {
            ctx->pc = 0x3B75F0u;
            goto label_3b75f0;
        }
    }
    ctx->pc = 0x3B75C4u;
    // 0x3b75c4: 0x0  nop
    ctx->pc = 0x3b75c4u;
    // NOP
label_3b75c8:
    // 0x3b75c8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b75c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b75cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b75ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b75d0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B75D0u;
    {
        const bool branch_taken_0x3b75d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b75d0) {
            ctx->pc = 0x3B75F0u;
            goto label_3b75f0;
        }
    }
    ctx->pc = 0x3B75D8u;
    // 0x3b75d8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b75d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b75dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b75e0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3b75e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b75e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B75E4u;
    {
        const bool branch_taken_0x3b75e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75E4u;
        // 0x3b75e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b75e4) {
            ctx->pc = 0x3B75F8u;
            goto label_3b75f8;
        }
    }
    ctx->pc = 0x3B75ECu;
    // 0x3b75ec: 0x0  nop
    ctx->pc = 0x3b75ecu;
    // NOP
label_3b75f0:
    // 0x3b75f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b75f4: 0x0  nop
    ctx->pc = 0x3b75f4u;
    // NOP
label_3b75f8:
    // 0x3b75f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B75F8u;
    {
        const bool branch_taken_0x3b75f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75F8u;
        // 0x3b75fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b75f8) {
            ctx->pc = 0x3B7608u;
            goto label_3b7608;
        }
    }
    ctx->pc = 0x3B7600u;
    // 0x3b7600: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B7600u;
    SET_GPR_U32(ctx, 31, 0x3B7608u);
    ctx->pc = 0x3B7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7600u;
    // 0x3b7604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B7600u, 0x3B7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7608u;
label_3b7608:
    // 0x3b7608: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b7608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b760c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b760cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b7610: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b7610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7614: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b7614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7618: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b7618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b761c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B761Cu;
        // 0x3b7620: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B761Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7624u;
}
