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

// Function: sub_00354030
// Address: 0x354030 - 0x3541ac
void sub_00354030_0x354030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354030_0x354030");
#endif

    switch (ctx->pc) {
        case 0x354090u: goto label_354090;
        case 0x3540b8u: goto label_3540b8;
        case 0x3540f8u: goto label_3540f8;
        case 0x35413cu: goto label_35413c;
        case 0x354170u: goto label_354170;
        default: break;
    }

    ctx->pc = 0x354030u;

    // 0x354030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x354030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x354034: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x354034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x354038: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x354038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x35403c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x354040: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x354040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x354044: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x354044u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354048: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x354048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35404c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x35404cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354050: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x354050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x354054: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x354054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354058: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x354058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35405c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35405cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x354060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x354064: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x354064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x354068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35406c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x35406cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x354070: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x354070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354074: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x354074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35407c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35407cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354084: 0x25083fc0  addiu       $t0, $t0, 0x3FC0
    ctx->pc = 0x354084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16320));
    // 0x354088: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x354088u;
    SET_GPR_U32(ctx, 31, 0x354090u);
    ctx->pc = 0x35408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354088u;
    // 0x35408c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x354088u, 0x354090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354090u;
label_354090:
    // 0x354090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x354090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354094: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x354094u;
    {
        const bool branch_taken_0x354094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x354098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354094u;
        // 0x354098: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354094) {
            ctx->pc = 0x354178u;
            goto label_354178;
        }
    }
    ctx->pc = 0x35409Cu;
    // 0x35409c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x35409cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540a0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3540a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3540a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3540a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3540ac: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x3540acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3540b0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3540B0u;
    SET_GPR_U32(ctx, 31, 0x3540B8u);
    ctx->pc = 0x3540B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3540B0u;
    // 0x3540b4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3540B0u, 0x3540B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540B8u;
label_3540b8:
    // 0x3540b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3540b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3540bc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3540bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3540c0: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x3540c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3540c4: 0x2442f8f8  addiu       $v0, $v0, -0x708
    ctx->pc = 0x3540c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965496));
    // 0x3540c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3540c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3540cc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3540ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3540d0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x3540d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3540d4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3540d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3540d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3540d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540dc: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x3540dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3540e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3540e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3540e4: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3540e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3540e8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3540e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3540ec: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3540ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3540f0: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3540F0u;
    SET_GPR_U32(ctx, 31, 0x3540F8u);
    ctx->pc = 0x3540F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3540F0u;
    // 0x3540f4: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3540F0u, 0x3540F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540F8u;
label_3540f8:
    // 0x3540f8: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3540f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3540fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3540fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x354100: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x354100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x354104: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x354104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x354108: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x354108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x35410c: 0x92820820  lbu         $v0, 0x820($s4)
    ctx->pc = 0x35410cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2080)));
    // 0x354110: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x354110u;
    {
        const bool branch_taken_0x354110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354110) {
            ctx->pc = 0x354148u;
            goto label_354148;
        }
    }
    ctx->pc = 0x354118u;
    // 0x354118: 0x7a830810  lq          $v1, 0x810($s4)
    ctx->pc = 0x354118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x35411c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x35411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x354120: 0x2442f8fc  addiu       $v0, $v0, -0x704
    ctx->pc = 0x354120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965500));
    // 0x354124: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x354124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354128: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x354128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35412c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x35412cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x354130: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x354130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x354134: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x354134u;
    SET_GPR_U32(ctx, 31, 0x35413Cu);
    ctx->pc = 0x354138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354134u;
    // 0x354138: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x354134u, 0x35413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35413Cu;
label_35413c:
    // 0x35413c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35413Cu;
    {
        const bool branch_taken_0x35413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35413c) {
            ctx->pc = 0x354170u;
            goto label_354170;
        }
    }
    ctx->pc = 0x354144u;
    // 0x354144: 0x0  nop
    ctx->pc = 0x354144u;
    // NOP
label_354148:
    // 0x354148: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x354148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35414c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x35414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x354150: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x354150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354154: 0x2442f8fc  addiu       $v0, $v0, -0x704
    ctx->pc = 0x354154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965500));
    // 0x354158: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x354158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35415c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x35415cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x354160: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x354160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x354164: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x354164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x354168: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x354168u;
    SET_GPR_U32(ctx, 31, 0x354170u);
    ctx->pc = 0x35416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354168u;
    // 0x35416c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x354168u, 0x354170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354170u;
label_354170:
    // 0x354170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354170u;
    {
        const bool branch_taken_0x354170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354170u;
        // 0x354174: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354170) {
            ctx->pc = 0x354180u;
            goto label_354180;
        }
    }
    ctx->pc = 0x354178u;
label_354178:
    // 0x354178: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35417c: 0x0  nop
    ctx->pc = 0x35417cu;
    // NOP
label_354180:
    // 0x354180: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x354180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x354184: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x354184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x354188: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x354188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35418c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35418cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x354190: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x354190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x354194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x354198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x354198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35419c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35419cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3541a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3541a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3541a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3541A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3541A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541A4u;
        // 0x3541a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3541A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3541ACu;
}
