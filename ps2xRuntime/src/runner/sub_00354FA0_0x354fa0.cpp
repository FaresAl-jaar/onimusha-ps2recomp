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

// Function: sub_00354FA0
// Address: 0x354fa0 - 0x355238
void sub_00354FA0_0x354fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354FA0_0x354fa0");
#endif

    switch (ctx->pc) {
        case 0x354ff0u: goto label_354ff0;
        case 0x355000u: goto label_355000;
        case 0x355054u: goto label_355054;
        case 0x355064u: goto label_355064;
        case 0x355074u: goto label_355074;
        case 0x355090u: goto label_355090;
        case 0x3550acu: goto label_3550ac;
        case 0x3550bcu: goto label_3550bc;
        case 0x3550f0u: goto label_3550f0;
        case 0x355108u: goto label_355108;
        case 0x355114u: goto label_355114;
        case 0x355120u: goto label_355120;
        case 0x355134u: goto label_355134;
        case 0x355168u: goto label_355168;
        case 0x355174u: goto label_355174;
        case 0x355228u: goto label_355228;
        default: break;
    }

    ctx->pc = 0x354fa0u;

    // 0x354fa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x354fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x354fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x354fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x354fac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x354facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x354fb0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x354fb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x354fb4: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x354FB4u;
    {
        const bool branch_taken_0x354fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x354FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FB4u;
        // 0x354fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354fb4) {
            ctx->pc = 0x355030u;
            goto label_355030;
        }
    }
    ctx->pc = 0x354FBCu;
    // 0x354fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354fc0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x354FC0u;
    {
        const bool branch_taken_0x354fc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x354fc0) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354FC8u;
    // 0x354fc8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x354FC8u;
    {
        const bool branch_taken_0x354fc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x354fc8) {
            ctx->pc = 0x354FD8u;
            goto label_354fd8;
        }
    }
    ctx->pc = 0x354FD0u;
    // 0x354fd0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x354FD0u;
    {
        const bool branch_taken_0x354fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354fd0) {
            ctx->pc = 0x355228u;
            goto label_355228;
        }
    }
    ctx->pc = 0x354FD8u;
label_354fd8:
    // 0x354fd8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x354FD8u;
    {
        const bool branch_taken_0x354fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x354fd8) {
            ctx->pc = 0x354FF8u;
            goto label_354ff8;
        }
    }
    ctx->pc = 0x354FE0u;
    // 0x354fe0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x354fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x354fe4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x354fe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354fe8: 0xc0aa86c  jal         func_2AA1B0
    ctx->pc = 0x354FE8u;
    SET_GPR_U32(ctx, 31, 0x354FF0u);
    ctx->pc = 0x354FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354FE8u;
    // 0x354fec: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA1B0u, 0x354FE8u, 0x354FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354FF0u;
label_354ff0:
    // 0x354ff0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354FF0u;
    {
        const bool branch_taken_0x354ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FF0u;
        // 0x354ff4: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354ff0) {
            ctx->pc = 0x355000u;
            goto label_355000;
        }
    }
    ctx->pc = 0x354FF8u;
label_354ff8:
    // 0x354ff8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354FF8u;
    SET_GPR_U32(ctx, 31, 0x355000u);
    ctx->pc = 0x354FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354FF8u;
    // 0x354ffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354FF8u, 0x355000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355000u;
label_355000:
    // 0x355000: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x355000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x355004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355008: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x355008u;
    {
        const bool branch_taken_0x355008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355008u;
        // 0x35500c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355008) {
            ctx->pc = 0x355228u;
            goto label_355228;
        }
    }
    ctx->pc = 0x355010u;
label_355010:
    // 0x355010: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x355010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x355014: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x355014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x355018: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x355018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x35501c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x35501cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x355020: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x355020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x355024: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x355024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x355028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35502c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x35502cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_355030:
    // 0x355030: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x355030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x355034: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x355034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x355038: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x355038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x35503c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x355040: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x355040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x355044: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x355044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355048: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x35504c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x35504Cu;
    SET_GPR_U32(ctx, 31, 0x355054u);
    ctx->pc = 0x355050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35504Cu;
    // 0x355050: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x35504Cu, 0x355054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355054u;
label_355054:
    // 0x355054: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x355054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x355058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35505c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x35505Cu;
    SET_GPR_U32(ctx, 31, 0x355064u);
    ctx->pc = 0x355060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35505Cu;
    // 0x355060: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x35505Cu, 0x355064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355064u;
label_355064:
    // 0x355064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355064u;
    {
        const bool branch_taken_0x355064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355064u;
        // 0x355068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355064) {
            ctx->pc = 0x355078u;
            goto label_355078;
        }
    }
    ctx->pc = 0x35506Cu;
    // 0x35506c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35506Cu;
    SET_GPR_U32(ctx, 31, 0x355074u);
    ctx->pc = 0x355070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35506Cu;
    // 0x355070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35506Cu, 0x355074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355074u;
label_355074:
    // 0x355074: 0x0  nop
    ctx->pc = 0x355074u;
    // NOP
label_355078:
    // 0x355078: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x355078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x35507c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x355080: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x355080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x355084: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x355084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x355088: 0xc097384  jal         func_25CE10
    ctx->pc = 0x355088u;
    SET_GPR_U32(ctx, 31, 0x355090u);
    ctx->pc = 0x35508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355088u;
    // 0x35508c: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x355088u, 0x355090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355090u;
label_355090:
    // 0x355090: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x355090u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x355094: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x355094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x355098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35509c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x35509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3550a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3550a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550a4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3550A4u;
    SET_GPR_U32(ctx, 31, 0x3550ACu);
    ctx->pc = 0x3550A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550A4u;
    // 0x3550a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3550A4u, 0x3550ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550ACu;
label_3550ac:
    // 0x3550ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3550ACu;
    {
        const bool branch_taken_0x3550ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3550B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550ACu;
        // 0x3550b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3550ac) {
            ctx->pc = 0x3550C8u;
            goto label_3550c8;
        }
    }
    ctx->pc = 0x3550B4u;
    // 0x3550b4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3550B4u;
    SET_GPR_U32(ctx, 31, 0x3550BCu);
    ctx->pc = 0x3550B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550B4u;
    // 0x3550b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3550B4u, 0x3550BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550BCu;
label_3550bc:
    // 0x3550bc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3550BCu;
    {
        const bool branch_taken_0x3550bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550bc) {
            ctx->pc = 0x355228u;
            goto label_355228;
        }
    }
    ctx->pc = 0x3550C4u;
    // 0x3550c4: 0x0  nop
    ctx->pc = 0x3550c4u;
    // NOP
label_3550c8:
    // 0x3550c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3550c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3550cc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3550ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3550d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3550d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550d4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3550d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3550d8: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3550d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3550dc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3550dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3550e0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3550e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3550e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3550e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3550e8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3550E8u;
    SET_GPR_U32(ctx, 31, 0x3550F0u);
    ctx->pc = 0x3550ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550E8u;
    // 0x3550ec: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3550E8u, 0x3550F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550F0u;
label_3550f0:
    // 0x3550f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3550F0u;
    {
        const bool branch_taken_0x3550f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550f0) {
            ctx->pc = 0x355180u;
            goto label_355180;
        }
    }
    ctx->pc = 0x3550F8u;
    // 0x3550f8: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3550f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3550fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3550fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355100: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x355100u;
    SET_GPR_U32(ctx, 31, 0x355108u);
    ctx->pc = 0x355104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355100u;
    // 0x355104: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x355100u, 0x355108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355108u;
label_355108:
    // 0x355108: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x355108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35510c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x35510Cu;
    SET_GPR_U32(ctx, 31, 0x355114u);
    ctx->pc = 0x355110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35510Cu;
    // 0x355110: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x35510Cu, 0x355114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355114u;
label_355114:
    // 0x355114: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x355114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355118: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x355118u;
    SET_GPR_U32(ctx, 31, 0x355120u);
    ctx->pc = 0x35511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355118u;
    // 0x35511c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x355118u, 0x355120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355120u;
label_355120:
    // 0x355120: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x355120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x355124: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x355124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x355128: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x355128u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x35512c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x35512Cu;
    SET_GPR_U32(ctx, 31, 0x355134u);
    ctx->pc = 0x355130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35512Cu;
    // 0x355130: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x35512Cu, 0x355134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355134u;
label_355134:
    // 0x355134: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x355134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x355138: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x355138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35513c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x35513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x355140: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x355140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x355144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x355144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355148: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x355148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x35514c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x35514cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x355150: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x355150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355154: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x355154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355158: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x355158u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35515c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35515cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355160: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x355160u;
    SET_GPR_U32(ctx, 31, 0x355168u);
    ctx->pc = 0x355164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355160u;
    // 0x355164: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x355160u, 0x355168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355168u;
label_355168:
    // 0x355168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35516c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35516Cu;
    SET_GPR_U32(ctx, 31, 0x355174u);
    ctx->pc = 0x355170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35516Cu;
    // 0x355170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35516Cu, 0x355174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355174u;
label_355174:
    // 0x355174: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x355174u;
    {
        const bool branch_taken_0x355174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355174) {
            ctx->pc = 0x355228u;
            goto label_355228;
        }
    }
    ctx->pc = 0x35517Cu;
    // 0x35517c: 0x0  nop
    ctx->pc = 0x35517cu;
    // NOP
label_355180:
    // 0x355180: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x355180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x355184: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x355184u;
    {
        const bool branch_taken_0x355184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355184u;
        // 0x355188: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355184) {
            ctx->pc = 0x355198u;
            goto label_355198;
        }
    }
    ctx->pc = 0x35518Cu;
    // 0x35518c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35518Cu;
    {
        const bool branch_taken_0x35518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35518c) {
            ctx->pc = 0x355218u;
            goto label_355218;
        }
    }
    ctx->pc = 0x355194u;
    // 0x355194: 0x0  nop
    ctx->pc = 0x355194u;
    // NOP
label_355198:
    // 0x355198: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x355198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35519c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3551a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3551a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3551a4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3551a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3551a8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3551a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3551ac: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3551ACu;
    {
        const bool branch_taken_0x3551ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3551ac) {
            ctx->pc = 0x3551E8u;
            goto label_3551e8;
        }
    }
    ctx->pc = 0x3551B4u;
    // 0x3551b4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3551b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3551b8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3551b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3551bc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3551BCu;
    {
        const bool branch_taken_0x3551bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3551C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551BCu;
        // 0x3551c0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3551bc) {
            ctx->pc = 0x355210u;
            goto label_355210;
        }
    }
    ctx->pc = 0x3551C4u;
    // 0x3551c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3551c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3551c8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3551c8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3551cc: 0x0  nop
    ctx->pc = 0x3551ccu;
    // NOP
    // 0x3551d0: 0x0  nop
    ctx->pc = 0x3551d0u;
    // NOP
    // 0x3551d4: 0x2010  mfhi        $a0
    ctx->pc = 0x3551d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3551d8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3551d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3551dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3551DCu;
    {
        const bool branch_taken_0x3551dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3551E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551DCu;
        // 0x3551e0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3551dc) {
            ctx->pc = 0x355210u;
            goto label_355210;
        }
    }
    ctx->pc = 0x3551E4u;
    // 0x3551e4: 0x0  nop
    ctx->pc = 0x3551e4u;
    // NOP
label_3551e8:
    // 0x3551e8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3551e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3551ec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3551ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3551f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3551F0u;
    {
        const bool branch_taken_0x3551f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3551f0) {
            ctx->pc = 0x355210u;
            goto label_355210;
        }
    }
    ctx->pc = 0x3551F8u;
    // 0x3551f8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3551f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3551fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3551fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355200: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x355200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x355204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x355204u;
    {
        const bool branch_taken_0x355204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355204u;
        // 0x355208: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355204) {
            ctx->pc = 0x355218u;
            goto label_355218;
        }
    }
    ctx->pc = 0x35520Cu;
    // 0x35520c: 0x0  nop
    ctx->pc = 0x35520cu;
    // NOP
label_355210:
    // 0x355210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355214: 0x0  nop
    ctx->pc = 0x355214u;
    // NOP
label_355218:
    // 0x355218: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355218u;
    {
        const bool branch_taken_0x355218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355218u;
        // 0x35521c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355218) {
            ctx->pc = 0x355228u;
            goto label_355228;
        }
    }
    ctx->pc = 0x355220u;
    // 0x355220: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x355220u;
    SET_GPR_U32(ctx, 31, 0x355228u);
    ctx->pc = 0x355224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355220u;
    // 0x355224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x355220u, 0x355228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355228u;
label_355228:
    // 0x355228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x355228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35522c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35522cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355230: 0x3e00008  jr          $ra
    ctx->pc = 0x355230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355230u;
        // 0x355234: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355238u;
}
