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

// Function: sub_0036B110
// Address: 0x36b110 - 0x36b374
void sub_0036B110_0x36b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B110_0x36b110");
#endif

    switch (ctx->pc) {
        case 0x36b140u: goto label_36b140;
        case 0x36b19cu: goto label_36b19c;
        case 0x36b1c8u: goto label_36b1c8;
        case 0x36b1f0u: goto label_36b1f0;
        case 0x36b218u: goto label_36b218;
        case 0x36b220u: goto label_36b220;
        case 0x36b250u: goto label_36b250;
        case 0x36b288u: goto label_36b288;
        case 0x36b2b0u: goto label_36b2b0;
        case 0x36b300u: goto label_36b300;
        case 0x36b328u: goto label_36b328;
        case 0x36b350u: goto label_36b350;
        default: break;
    }

    ctx->pc = 0x36b110u;

    // 0x36b110: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x36b110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x36b114: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x36b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x36b118: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36b11c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36b120: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36b120u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b124: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36b128: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36b128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36b12c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36b12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36b130: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x36b130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x36b134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36b134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36b138: 0xc0cc01c  jal         func_330070
    ctx->pc = 0x36B138u;
    SET_GPR_U32(ctx, 31, 0x36B140u);
    ctx->pc = 0x36B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B138u;
    // 0x36b13c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330070u, 0x36B138u, 0x36B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B140u;
label_36b140:
    // 0x36b140: 0x27b3007c  addiu       $s3, $sp, 0x7C
    ctx->pc = 0x36b140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x36b144: 0x27b2007d  addiu       $s2, $sp, 0x7D
    ctx->pc = 0x36b144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 125));
    // 0x36b148: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x36b148u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b14c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x36b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x36b150: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x36b150u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x36b154: 0x27b1007e  addiu       $s1, $sp, 0x7E
    ctx->pc = 0x36b154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x36b158: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x36b158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36b15c: 0x27b0007f  addiu       $s0, $sp, 0x7F
    ctx->pc = 0x36b15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x36b160: 0xa2280000  sb          $t0, 0x0($s1)
    ctx->pc = 0x36b160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x36b164: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x36b164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x36b168: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x36b168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x36b16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b170: 0x9023140c  lbu         $v1, 0x140C($at)
    ctx->pc = 0x36b170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92140Cu));
    // 0x36b174: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x36B174u;
    {
        const bool branch_taken_0x36b174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B174u;
        // 0x36b178: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b174) {
            ctx->pc = 0x36B218u;
            goto label_36b218;
        }
    }
    ctx->pc = 0x36B17Cu;
    // 0x36b17c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36b17cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x36b180: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36b180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x36b184: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x36b184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x36b188: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x36b188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x36b18c: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x36b18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x36b190: 0x25291898  addiu       $t1, $t1, 0x1898
    ctx->pc = 0x36b190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6296));
    // 0x36b194: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x36B194u;
    SET_GPR_U32(ctx, 31, 0x36B19Cu);
    ctx->pc = 0x36B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B194u;
    // 0x36b198: 0x3c0a0103  lui         $t2, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x36B194u, 0x36B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B19Cu;
label_36b19c:
    // 0x36b19c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36b1a0: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36b1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x36b1a4: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36b1a8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x36b1ac: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x36b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x36b1b0: 0x2406011f  addiu       $a2, $zero, 0x11F
    ctx->pc = 0x36b1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x36b1b4: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x36b1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x36b1b8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x36b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36b1bc: 0x25291898  addiu       $t1, $t1, 0x1898
    ctx->pc = 0x36b1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6296));
    // 0x36b1c0: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x36B1C0u;
    SET_GPR_U32(ctx, 31, 0x36B1C8u);
    ctx->pc = 0x36B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1C0u;
    // 0x36b1c4: 0x344a0001  ori         $t2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x36B1C0u, 0x36B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1C8u;
label_36b1c8:
    // 0x36b1c8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x36b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x36b1cc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x36b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x36b1d0: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x36b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x36b1d4: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x36b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x36b1d8: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x36b1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x36b1dc: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x36b1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x36b1e0: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x36b1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x36b1e4: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x36b1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36b1e8: 0xc09c844  jal         func_272110
    ctx->pc = 0x36B1E8u;
    SET_GPR_U32(ctx, 31, 0x36B1F0u);
    ctx->pc = 0x36B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1E8u;
    // 0x36b1ec: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x36B1E8u, 0x36B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1F0u;
label_36b1f0:
    // 0x36b1f0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x36b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x36b1f4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x36b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x36b1f8: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x36b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x36b1fc: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x36b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x36b200: 0x2406011f  addiu       $a2, $zero, 0x11F
    ctx->pc = 0x36b200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x36b204: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x36b204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x36b208: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x36b208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x36b20c: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x36b20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36b210: 0xc09c844  jal         func_272110
    ctx->pc = 0x36B210u;
    SET_GPR_U32(ctx, 31, 0x36B218u);
    ctx->pc = 0x36B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B210u;
    // 0x36b214: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x36B210u, 0x36B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B218u;
label_36b218:
    // 0x36b218: 0xc0da9cc  jal         func_36A730
    ctx->pc = 0x36B218u;
    SET_GPR_U32(ctx, 31, 0x36B220u);
    ctx->pc = 0x36B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B218u;
    // 0x36b21c: 0x92a401bd  lbu         $a0, 0x1BD($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 445)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A730u, 0x36B218u, 0x36B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B220u;
label_36b220:
    // 0x36b220: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36b220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b224: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36b224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36b228: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36b228u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x36b22c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36b230: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x36b234: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x36b234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x36b238: 0x24060137  addiu       $a2, $zero, 0x137
    ctx->pc = 0x36b238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x36b23c: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x36b23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x36b240: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x36b240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36b244: 0x25291898  addiu       $t1, $t1, 0x1898
    ctx->pc = 0x36b244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6296));
    // 0x36b248: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x36B248u;
    SET_GPR_U32(ctx, 31, 0x36B250u);
    ctx->pc = 0x36B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B248u;
    // 0x36b24c: 0x344a0003  ori         $t2, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x36B248u, 0x36B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B250u;
label_36b250:
    // 0x36b250: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x36B250u;
    {
        const bool branch_taken_0x36b250 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B250u;
        // 0x36b254: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b250) {
            ctx->pc = 0x36B260u;
            goto label_36b260;
        }
    }
    ctx->pc = 0x36B258u;
    // 0x36b258: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x36b258u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x36b25c: 0x0  nop
    ctx->pc = 0x36b25cu;
    // NOP
label_36b260:
    // 0x36b260: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36b260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36b264: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36b264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x36b268: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x36b268u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b26c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x36b270: 0x2405017f  addiu       $a1, $zero, 0x17F
    ctx->pc = 0x36b270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x36b274: 0x24060137  addiu       $a2, $zero, 0x137
    ctx->pc = 0x36b274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x36b278: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x36b278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x36b27c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x36b27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36b280: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x36B280u;
    SET_GPR_U32(ctx, 31, 0x36B288u);
    ctx->pc = 0x36B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B280u;
    // 0x36b284: 0x252918a0  addiu       $t1, $t1, 0x18A0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x36B280u, 0x36B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B288u;
label_36b288:
    // 0x36b288: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x36b288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x36b28c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x36b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x36b290: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x36b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x36b294: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x36b294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x36b298: 0x24060137  addiu       $a2, $zero, 0x137
    ctx->pc = 0x36b298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x36b29c: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x36b29cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x36b2a0: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x36b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x36b2a4: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x36b2a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36b2a8: 0xc09c844  jal         func_272110
    ctx->pc = 0x36B2A8u;
    SET_GPR_U32(ctx, 31, 0x36B2B0u);
    ctx->pc = 0x36B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2A8u;
    // 0x36b2ac: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x36B2A8u, 0x36B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2B0u;
label_36b2b0:
    // 0x36b2b0: 0x8ea30198  lw          $v1, 0x198($s5)
    ctx->pc = 0x36b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
    // 0x36b2b4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x36B2B4u;
    {
        const bool branch_taken_0x36b2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b2b4) {
            ctx->pc = 0x36B350u;
            goto label_36b350;
        }
    }
    ctx->pc = 0x36B2BCu;
    // 0x36b2bc: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x36b2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b2c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x36b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x36b2c4: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x36b2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x36b2c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36b2cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36b2d0: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36b2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x36b2d4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x36b2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x36b2d8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x36b2dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x36b2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x36b2e0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36b2e4: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36b2e8: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x36b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x36b2ec: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x36b2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x36b2f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36b2f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b2f4: 0x25291898  addiu       $t1, $t1, 0x1898
    ctx->pc = 0x36b2f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6296));
    // 0x36b2f8: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x36B2F8u;
    SET_GPR_U32(ctx, 31, 0x36B300u);
    ctx->pc = 0x36B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2F8u;
    // 0x36b2fc: 0x344a0004  ori         $t2, $v0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x36B2F8u, 0x36B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B300u;
label_36b300:
    // 0x36b300: 0x8eaa01a4  lw          $t2, 0x1A4($s5)
    ctx->pc = 0x36b300u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 420)));
    // 0x36b304: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36b304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36b308: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36b308u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x36b30c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x36b310: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36b310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36b314: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x36b314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x36b318: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x36b318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x36b31c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36b31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b320: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x36B320u;
    SET_GPR_U32(ctx, 31, 0x36B328u);
    ctx->pc = 0x36B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B320u;
    // 0x36b324: 0x25291898  addiu       $t1, $t1, 0x1898 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x36B320u, 0x36B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B328u;
label_36b328:
    // 0x36b328: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x36b328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x36b32c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x36b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x36b330: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x36b330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x36b334: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x36b334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36b338: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x36b338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x36b33c: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x36b33cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x36b340: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x36b340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x36b344: 0x2409002a  addiu       $t1, $zero, 0x2A
    ctx->pc = 0x36b344u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x36b348: 0xc09c720  jal         func_271C80
    ctx->pc = 0x36B348u;
    SET_GPR_U32(ctx, 31, 0x36B350u);
    ctx->pc = 0x36B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B348u;
    // 0x36b34c: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x36B348u, 0x36B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B350u;
label_36b350:
    // 0x36b350: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x36b350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b354: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36b354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b358: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36b358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b35c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36b35cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36b360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36b364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b36c: 0x3e00008  jr          $ra
    ctx->pc = 0x36B36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B36Cu;
        // 0x36b370: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B374u;
}
