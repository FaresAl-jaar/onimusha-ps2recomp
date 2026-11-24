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

// Function: sub_00377230
// Address: 0x377230 - 0x3773c0
void sub_00377230_0x377230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377230_0x377230");
#endif

    switch (ctx->pc) {
        case 0x3772a4u: goto label_3772a4;
        case 0x3772c0u: goto label_3772c0;
        case 0x3772d0u: goto label_3772d0;
        case 0x3772f0u: goto label_3772f0;
        case 0x37731cu: goto label_37731c;
        default: break;
    }

    ctx->pc = 0x377230u;

    // 0x377230: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x377230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x377234: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x377234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x377238: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x377238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37723c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x377240: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x377240u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377244: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x377244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x377248: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x377248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37724c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x377250: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x377250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377254: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x377254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x377258: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x377258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37725c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377260: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x377260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377268: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x377268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37726c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377270: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x377270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377278: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x377278u;
    {
        const bool branch_taken_0x377278 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x37727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377278u;
        // 0x37727c: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377278) {
            ctx->pc = 0x377288u;
            goto label_377288;
        }
    }
    ctx->pc = 0x377280u;
    // 0x377280: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x377280u;
    {
        const bool branch_taken_0x377280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377280u;
        // 0x377284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377280) {
            ctx->pc = 0x377390u;
            goto label_377390;
        }
    }
    ctx->pc = 0x377288u;
label_377288:
    // 0x377288: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x377288u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x37728c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377298: 0x240705f0  addiu       $a3, $zero, 0x5F0
    ctx->pc = 0x377298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x37729c: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x37729Cu;
    SET_GPR_U32(ctx, 31, 0x3772A4u);
    ctx->pc = 0x3772A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37729Cu;
    // 0x3772a0: 0x250871c0  addiu       $t0, $t0, 0x71C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x37729Cu, 0x3772A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772A4u;
label_3772a4:
    // 0x3772a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3772a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772a8: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3772A8u;
    {
        const bool branch_taken_0x3772a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3772ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772A8u;
        // 0x3772ac: 0x324700ff  andi        $a3, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3772a8) {
            ctx->pc = 0x377388u;
            goto label_377388;
        }
    }
    ctx->pc = 0x3772B0u;
    // 0x3772b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3772b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3772b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3772b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772b8: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x3772B8u;
    SET_GPR_U32(ctx, 31, 0x3772C0u);
    ctx->pc = 0x3772BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772B8u;
    // 0x3772bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x3772B8u, 0x3772C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772C0u;
label_3772c0:
    // 0x3772c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3772c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3772c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3772c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3772c8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3772C8u;
    SET_GPR_U32(ctx, 31, 0x3772D0u);
    ctx->pc = 0x3772CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772C8u;
    // 0x3772cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3772C8u, 0x3772D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772D0u;
label_3772d0:
    // 0x3772d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3772d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772d4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3772d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772d8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3772d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3772dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772e0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3772e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3772e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3772e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3772e8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3772E8u;
    SET_GPR_U32(ctx, 31, 0x3772F0u);
    ctx->pc = 0x3772ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772E8u;
    // 0x3772ec: 0x27aa00a0  addiu       $t2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3772E8u, 0x3772F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772F0u;
label_3772f0:
    // 0x3772f0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3772f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3772f4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3772f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3772f8: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3772f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3772fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3772fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377300: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x377300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x377304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377308: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x377308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x37730c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x37730cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x377310: 0xa2000522  sb          $zero, 0x522($s0)
    ctx->pc = 0x377310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1314), (uint8_t)GPR_U32(ctx, 0));
    // 0x377314: 0xc0c09ac  jal         func_3026B0
    ctx->pc = 0x377314u;
    SET_GPR_U32(ctx, 31, 0x37731Cu);
    ctx->pc = 0x377318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377314u;
    // 0x377318: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3026B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3026B0u, 0x377314u, 0x37731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37731Cu;
label_37731c:
    // 0x37731c: 0xa21705d2  sb          $s7, 0x5D2($s0)
    ctx->pc = 0x37731cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1490), (uint8_t)GPR_U32(ctx, 23));
    // 0x377320: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377324: 0xa21e05d3  sb          $fp, 0x5D3($s0)
    ctx->pc = 0x377324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1491), (uint8_t)GPR_U32(ctx, 30));
    // 0x377328: 0x24421b64  addiu       $v0, $v0, 0x1B64
    ctx->pc = 0x377328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7012));
    // 0x37732c: 0x93a300f0  lbu         $v1, 0xF0($sp)
    ctx->pc = 0x37732cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x377330: 0xa20305e0  sb          $v1, 0x5E0($s0)
    ctx->pc = 0x377330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1504), (uint8_t)GPR_U32(ctx, 3));
    // 0x377334: 0xa21205d4  sb          $s2, 0x5D4($s0)
    ctx->pc = 0x377334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1492), (uint8_t)GPR_U32(ctx, 18));
    // 0x377338: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x377338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x37733c: 0x93a400f0  lbu         $a0, 0xF0($sp)
    ctx->pc = 0x37733cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x377340: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x377340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x377344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x377348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37734c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377350: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x377350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377354: 0xa60205e2  sh          $v0, 0x5E2($s0)
    ctx->pc = 0x377354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 2));
    // 0x377358: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x377358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37735c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x37735Cu;
    {
        const bool branch_taken_0x37735c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x377360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37735Cu;
        // 0x377360: 0x7e020590  sq          $v0, 0x590($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 1424), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37735c) {
            ctx->pc = 0x377378u;
            goto label_377378;
        }
    }
    ctx->pc = 0x377364u;
    // 0x377364: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x377364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x377368: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x377368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x37736c: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x37736cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x377370: 0x7e0205a0  sq          $v0, 0x5A0($s0)
    ctx->pc = 0x377370u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1440), GPR_VEC(ctx, 2));
    // 0x377374: 0x0  nop
    ctx->pc = 0x377374u;
    // NOP
label_377378:
    // 0x377378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x377378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37737c: 0xa20205d5  sb          $v0, 0x5D5($s0)
    ctx->pc = 0x37737cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1493), (uint8_t)GPR_U32(ctx, 2));
    // 0x377380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x377380u;
    {
        const bool branch_taken_0x377380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377380u;
        // 0x377384: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377380) {
            ctx->pc = 0x377390u;
            goto label_377390;
        }
    }
    ctx->pc = 0x377388u;
label_377388:
    // 0x377388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37738c: 0x0  nop
    ctx->pc = 0x37738cu;
    // NOP
label_377390:
    // 0x377390: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x377390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x377394: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x377394u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x377398: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x377398u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37739c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37739cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3773a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3773a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3773a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3773a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3773a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3773a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3773ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3773acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3773b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3773b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3773b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3773b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3773b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3773B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3773BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3773B8u;
        // 0x3773bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3773B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3773C0u;
}
