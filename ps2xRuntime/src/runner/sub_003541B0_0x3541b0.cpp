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

// Function: sub_003541B0
// Address: 0x3541b0 - 0x354450
void sub_003541B0_0x3541b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003541B0_0x3541b0");
#endif

    switch (ctx->pc) {
        case 0x354204u: goto label_354204;
        case 0x354218u: goto label_354218;
        case 0x35426cu: goto label_35426c;
        case 0x35427cu: goto label_35427c;
        case 0x35428cu: goto label_35428c;
        case 0x3542a8u: goto label_3542a8;
        case 0x3542c4u: goto label_3542c4;
        case 0x3542d4u: goto label_3542d4;
        case 0x354308u: goto label_354308;
        case 0x354320u: goto label_354320;
        case 0x35432cu: goto label_35432c;
        case 0x354338u: goto label_354338;
        case 0x35434cu: goto label_35434c;
        case 0x354380u: goto label_354380;
        case 0x35438cu: goto label_35438c;
        case 0x354440u: goto label_354440;
        default: break;
    }

    ctx->pc = 0x3541b0u;

    // 0x3541b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3541b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3541b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3541b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3541b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3541b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3541bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3541bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3541c0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3541c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3541c4: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3541C4u;
    {
        const bool branch_taken_0x3541c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3541C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541C4u;
        // 0x3541c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541c4) {
            ctx->pc = 0x354248u;
            goto label_354248;
        }
    }
    ctx->pc = 0x3541CCu;
    // 0x3541cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3541ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3541d0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3541D0u;
    {
        const bool branch_taken_0x3541d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3541d0) {
            ctx->pc = 0x354228u;
            goto label_354228;
        }
    }
    ctx->pc = 0x3541D8u;
    // 0x3541d8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3541D8u;
    {
        const bool branch_taken_0x3541d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541d8) {
            ctx->pc = 0x3541E8u;
            goto label_3541e8;
        }
    }
    ctx->pc = 0x3541E0u;
    // 0x3541e0: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x3541E0u;
    {
        const bool branch_taken_0x3541e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541e0) {
            ctx->pc = 0x354440u;
            goto label_354440;
        }
    }
    ctx->pc = 0x3541E8u;
label_3541e8:
    // 0x3541e8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3541E8u;
    {
        const bool branch_taken_0x3541e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541e8) {
            ctx->pc = 0x354210u;
            goto label_354210;
        }
    }
    ctx->pc = 0x3541F0u;
    // 0x3541f0: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x3541f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x3541f4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3541f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3541f8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3541f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3541fc: 0xc0a98a8  jal         func_2A62A0
    ctx->pc = 0x3541FCu;
    SET_GPR_U32(ctx, 31, 0x354204u);
    ctx->pc = 0x354200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3541FCu;
    // 0x354200: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A62A0u, 0x3541FCu, 0x354204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354204u;
label_354204:
    // 0x354204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354204u;
    {
        const bool branch_taken_0x354204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354204u;
        // 0x354208: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354204) {
            ctx->pc = 0x354218u;
            goto label_354218;
        }
    }
    ctx->pc = 0x35420Cu;
    // 0x35420c: 0x0  nop
    ctx->pc = 0x35420cu;
    // NOP
label_354210:
    // 0x354210: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354210u;
    SET_GPR_U32(ctx, 31, 0x354218u);
    ctx->pc = 0x354214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354210u;
    // 0x354214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354210u, 0x354218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354218u;
label_354218:
    // 0x354218: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x354218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x35421c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354220: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x354220u;
    {
        const bool branch_taken_0x354220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354220u;
        // 0x354224: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354220) {
            ctx->pc = 0x354440u;
            goto label_354440;
        }
    }
    ctx->pc = 0x354228u;
label_354228:
    // 0x354228: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x354228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x35422c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x35422cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x354230: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x354230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x354234: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x354234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x354238: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x354238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x35423c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x35423cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x354240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x354244: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x354244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_354248:
    // 0x354248: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x354248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x35424c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x35424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x354250: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x354250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354254: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x354254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x354258: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x354258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35425c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x35425cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354260: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x354260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x354264: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x354264u;
    SET_GPR_U32(ctx, 31, 0x35426Cu);
    ctx->pc = 0x354268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354264u;
    // 0x354268: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x354264u, 0x35426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35426Cu;
label_35426c:
    // 0x35426c: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x35426cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x354270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354274: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x354274u;
    SET_GPR_U32(ctx, 31, 0x35427Cu);
    ctx->pc = 0x354278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354274u;
    // 0x354278: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x354274u, 0x35427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35427Cu;
label_35427c:
    // 0x35427c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35427Cu;
    {
        const bool branch_taken_0x35427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35427Cu;
        // 0x354280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35427c) {
            ctx->pc = 0x354290u;
            goto label_354290;
        }
    }
    ctx->pc = 0x354284u;
    // 0x354284: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354284u;
    SET_GPR_U32(ctx, 31, 0x35428Cu);
    ctx->pc = 0x354288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354284u;
    // 0x354288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354284u, 0x35428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35428Cu;
label_35428c:
    // 0x35428c: 0x0  nop
    ctx->pc = 0x35428cu;
    // NOP
label_354290:
    // 0x354290: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x354290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x354294: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x354294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x354298: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x354298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x35429c: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x35429cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3542a0: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3542A0u;
    SET_GPR_U32(ctx, 31, 0x3542A8u);
    ctx->pc = 0x3542A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3542A0u;
    // 0x3542a4: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3542A0u, 0x3542A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542A8u;
label_3542a8:
    // 0x3542a8: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3542a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3542ac: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3542acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3542b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3542b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3542b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3542b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3542b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542bc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3542BCu;
    SET_GPR_U32(ctx, 31, 0x3542C4u);
    ctx->pc = 0x3542C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3542BCu;
    // 0x3542c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3542BCu, 0x3542C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542C4u;
label_3542c4:
    // 0x3542c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3542C4u;
    {
        const bool branch_taken_0x3542c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3542C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3542C4u;
        // 0x3542c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542c4) {
            ctx->pc = 0x3542E0u;
            goto label_3542e0;
        }
    }
    ctx->pc = 0x3542CCu;
    // 0x3542cc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3542CCu;
    SET_GPR_U32(ctx, 31, 0x3542D4u);
    ctx->pc = 0x3542D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3542CCu;
    // 0x3542d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3542CCu, 0x3542D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542D4u;
label_3542d4:
    // 0x3542d4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3542D4u;
    {
        const bool branch_taken_0x3542d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542d4) {
            ctx->pc = 0x354440u;
            goto label_354440;
        }
    }
    ctx->pc = 0x3542DCu;
    // 0x3542dc: 0x0  nop
    ctx->pc = 0x3542dcu;
    // NOP
label_3542e0:
    // 0x3542e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3542e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3542e4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3542e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3542e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3542e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542ec: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3542ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3542f0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3542f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3542f4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3542f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3542f8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3542f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3542fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3542fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354300: 0xc0c0980  jal         func_302600
    ctx->pc = 0x354300u;
    SET_GPR_U32(ctx, 31, 0x354308u);
    ctx->pc = 0x354304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354300u;
    // 0x354304: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x354300u, 0x354308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354308u;
label_354308:
    // 0x354308: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x354308u;
    {
        const bool branch_taken_0x354308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354308) {
            ctx->pc = 0x354398u;
            goto label_354398;
        }
    }
    ctx->pc = 0x354310u;
    // 0x354310: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x354310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x354314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354318: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x354318u;
    SET_GPR_U32(ctx, 31, 0x354320u);
    ctx->pc = 0x35431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354318u;
    // 0x35431c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x354318u, 0x354320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354320u;
label_354320:
    // 0x354320: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x354320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354324: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x354324u;
    SET_GPR_U32(ctx, 31, 0x35432Cu);
    ctx->pc = 0x354328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354324u;
    // 0x354328: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x354324u, 0x35432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35432Cu;
label_35432c:
    // 0x35432c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x35432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354330: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x354330u;
    SET_GPR_U32(ctx, 31, 0x354338u);
    ctx->pc = 0x354334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354330u;
    // 0x354334: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x354330u, 0x354338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354338u;
label_354338:
    // 0x354338: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x354338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x35433c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x35433cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354340: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x354340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354344: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x354344u;
    SET_GPR_U32(ctx, 31, 0x35434Cu);
    ctx->pc = 0x354348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354344u;
    // 0x354348: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x354344u, 0x35434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35434Cu;
label_35434c:
    // 0x35434c: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x35434cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354350: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x354350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x354354: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x354354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x354358: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x354358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x35435c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35435cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354360: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x354360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x354364: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x354364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354368: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x354368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35436c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35436cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354370: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x354370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354374: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x354374u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354378: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x354378u;
    SET_GPR_U32(ctx, 31, 0x354380u);
    ctx->pc = 0x35437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354378u;
    // 0x35437c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x354378u, 0x354380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354380u;
label_354380:
    // 0x354380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354384: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354384u;
    SET_GPR_U32(ctx, 31, 0x35438Cu);
    ctx->pc = 0x354388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354384u;
    // 0x354388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354384u, 0x35438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35438Cu;
label_35438c:
    // 0x35438c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x35438Cu;
    {
        const bool branch_taken_0x35438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35438c) {
            ctx->pc = 0x354440u;
            goto label_354440;
        }
    }
    ctx->pc = 0x354394u;
    // 0x354394: 0x0  nop
    ctx->pc = 0x354394u;
    // NOP
label_354398:
    // 0x354398: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x354398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x35439c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35439Cu;
    {
        const bool branch_taken_0x35439c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35439Cu;
        // 0x3543a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35439c) {
            ctx->pc = 0x3543B0u;
            goto label_3543b0;
        }
    }
    ctx->pc = 0x3543A4u;
    // 0x3543a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3543A4u;
    {
        const bool branch_taken_0x3543a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3543a4) {
            ctx->pc = 0x354430u;
            goto label_354430;
        }
    }
    ctx->pc = 0x3543ACu;
    // 0x3543ac: 0x0  nop
    ctx->pc = 0x3543acu;
    // NOP
label_3543b0:
    // 0x3543b0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3543b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3543b4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3543b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3543b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3543b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3543bc: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3543bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3543c0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3543c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3543c4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3543C4u;
    {
        const bool branch_taken_0x3543c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3543c4) {
            ctx->pc = 0x354400u;
            goto label_354400;
        }
    }
    ctx->pc = 0x3543CCu;
    // 0x3543cc: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3543ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3543d0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3543d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3543d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3543D4u;
    {
        const bool branch_taken_0x3543d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3543D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543D4u;
        // 0x3543d8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543d4) {
            ctx->pc = 0x354428u;
            goto label_354428;
        }
    }
    ctx->pc = 0x3543DCu;
    // 0x3543dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3543dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3543e0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3543e0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3543e4: 0x0  nop
    ctx->pc = 0x3543e4u;
    // NOP
    // 0x3543e8: 0x0  nop
    ctx->pc = 0x3543e8u;
    // NOP
    // 0x3543ec: 0x2010  mfhi        $a0
    ctx->pc = 0x3543ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3543f0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3543f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3543f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3543F4u;
    {
        const bool branch_taken_0x3543f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543F4u;
        // 0x3543f8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543f4) {
            ctx->pc = 0x354428u;
            goto label_354428;
        }
    }
    ctx->pc = 0x3543FCu;
    // 0x3543fc: 0x0  nop
    ctx->pc = 0x3543fcu;
    // NOP
label_354400:
    // 0x354400: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x354400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x354404: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x354404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x354408: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x354408u;
    {
        const bool branch_taken_0x354408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354408) {
            ctx->pc = 0x354428u;
            goto label_354428;
        }
    }
    ctx->pc = 0x354410u;
    // 0x354410: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x354410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x354414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354418: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x354418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x35441c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35441Cu;
    {
        const bool branch_taken_0x35441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35441Cu;
        // 0x354420: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35441c) {
            ctx->pc = 0x354430u;
            goto label_354430;
        }
    }
    ctx->pc = 0x354424u;
    // 0x354424: 0x0  nop
    ctx->pc = 0x354424u;
    // NOP
label_354428:
    // 0x354428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35442c: 0x0  nop
    ctx->pc = 0x35442cu;
    // NOP
label_354430:
    // 0x354430: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x354430u;
    {
        const bool branch_taken_0x354430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x354434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354430u;
        // 0x354434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354430) {
            ctx->pc = 0x354440u;
            goto label_354440;
        }
    }
    ctx->pc = 0x354438u;
    // 0x354438: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354438u;
    SET_GPR_U32(ctx, 31, 0x354440u);
    ctx->pc = 0x35443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354438u;
    // 0x35443c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354438u, 0x354440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354440u;
label_354440:
    // 0x354440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x354440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354444: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x354444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354448: 0x3e00008  jr          $ra
    ctx->pc = 0x354448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354448u;
        // 0x35444c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354450u;
}
