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

// Function: sub_0034A1F0
// Address: 0x34a1f0 - 0x34a364
void sub_0034A1F0_0x34a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A1F0_0x34a1f0");
#endif

    switch (ctx->pc) {
        case 0x34a250u: goto label_34a250;
        case 0x34a278u: goto label_34a278;
        case 0x34a2c4u: goto label_34a2c4;
        case 0x34a308u: goto label_34a308;
        default: break;
    }

    ctx->pc = 0x34a1f0u;

    // 0x34a1f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x34a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x34a1f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x34a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x34a1f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x34a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x34a1fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34a200: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x34a200u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34a208: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x34a208u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a20c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34a20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34a210: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x34a210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a214: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a218: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x34a218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a21c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a220: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34a220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a224: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34a224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a22c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x34a22cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x34a230: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x34a230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a23c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a240: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x34a240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x34a244: 0x2508a180  addiu       $t0, $t0, -0x5E80
    ctx->pc = 0x34a244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943104));
    // 0x34a248: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x34A248u;
    SET_GPR_U32(ctx, 31, 0x34A250u);
    ctx->pc = 0x34A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A248u;
    // 0x34a24c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x34A248u, 0x34A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A250u;
label_34a250:
    // 0x34a250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34a250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a254: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x34A254u;
    {
        const bool branch_taken_0x34a254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A254u;
        // 0x34a258: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a254) {
            ctx->pc = 0x34A330u;
            goto label_34a330;
        }
    }
    ctx->pc = 0x34A25Cu;
    // 0x34a25c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x34a25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a260: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34a260u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a268: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a26c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x34a26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34a270: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x34A270u;
    SET_GPR_U32(ctx, 31, 0x34A278u);
    ctx->pc = 0x34A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A270u;
    // 0x34a274: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x34A270u, 0x34A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A278u;
label_34a278:
    // 0x34a278: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x34a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34a27c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x34a280: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x34a280u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34a284: 0x2463f5e0  addiu       $v1, $v1, -0xA20
    ctx->pc = 0x34a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964704));
    // 0x34a288: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x34a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34a28c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34a290: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x34a290u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a294: 0x2442f5e2  addiu       $v0, $v0, -0xA1E
    ctx->pc = 0x34a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964706));
    // 0x34a298: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x34a298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34a29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a2a4: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x34a2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x34a2a8: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34a2ac: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x34a2acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a2b0: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x34a2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x34a2b4: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x34a2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x34a2b8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x34a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a2bc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x34A2BCu;
    SET_GPR_U32(ctx, 31, 0x34A2C4u);
    ctx->pc = 0x34A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A2BCu;
    // 0x34a2c0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x34A2BCu, 0x34A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2C4u;
label_34a2c4:
    // 0x34a2c4: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x34a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x34a2c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34a2cc: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x34a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x34a2d0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x34a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x34a2d4: 0xa2170568  sb          $s7, 0x568($s0)
    ctx->pc = 0x34a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 23));
    // 0x34a2d8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34a2dc: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x34a2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x34a2e0: 0x2442f5e4  addiu       $v0, $v0, -0xA1C
    ctx->pc = 0x34a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964708));
    // 0x34a2e4: 0x9283000a  lbu         $v1, 0xA($s4)
    ctx->pc = 0x34a2e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x34a2e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34a2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34a2ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34a2f0: 0xa203056a  sb          $v1, 0x56A($s0)
    ctx->pc = 0x34a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1386), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a2f4: 0x78235c70  lq          $v1, 0x5C70($at)
    ctx->pc = 0x34a2f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C70u));
    // 0x34a2f8: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x34a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x34a2fc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x34a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a300: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x34A300u;
    SET_GPR_U32(ctx, 31, 0x34A308u);
    ctx->pc = 0x34A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A300u;
    // 0x34a304: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x34A300u, 0x34A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A308u;
label_34a308:
    // 0x34a308: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A308u;
    {
        const bool branch_taken_0x34a308 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a308) {
            ctx->pc = 0x34A320u;
            goto label_34a320;
        }
    }
    ctx->pc = 0x34A310u;
    // 0x34a310: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34a314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34A314u;
    {
        const bool branch_taken_0x34a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A314u;
        // 0x34a318: 0xae020518  sw          $v0, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a314) {
            ctx->pc = 0x34A328u;
            goto label_34a328;
        }
    }
    ctx->pc = 0x34A31Cu;
    // 0x34a31c: 0x0  nop
    ctx->pc = 0x34a31cu;
    // NOP
label_34a320:
    // 0x34a320: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x34a320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x34a324: 0x0  nop
    ctx->pc = 0x34a324u;
    // NOP
label_34a328:
    // 0x34a328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34A328u;
    {
        const bool branch_taken_0x34a328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A328u;
        // 0x34a32c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a328) {
            ctx->pc = 0x34A338u;
            goto label_34a338;
        }
    }
    ctx->pc = 0x34A330u;
label_34a330:
    // 0x34a330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a334: 0x0  nop
    ctx->pc = 0x34a334u;
    // NOP
label_34a338:
    // 0x34a338: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x34a338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34a33c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x34a33cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34a340: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34a340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34a344: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34a344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34a348: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34a348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a34c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34a34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a35c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A35Cu;
        // 0x34a360: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A364u;
}
