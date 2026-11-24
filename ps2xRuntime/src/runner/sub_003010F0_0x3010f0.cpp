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

// Function: sub_003010F0
// Address: 0x3010f0 - 0x3012d0
void sub_003010F0_0x3010f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003010F0_0x3010f0");
#endif

    switch (ctx->pc) {
        case 0x301144u: goto label_301144;
        case 0x301158u: goto label_301158;
        case 0x301198u: goto label_301198;
        case 0x3011a8u: goto label_3011a8;
        case 0x301218u: goto label_301218;
        case 0x3012c0u: goto label_3012c0;
        default: break;
    }

    ctx->pc = 0x3010f0u;

    // 0x3010f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3010f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3010f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3010f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3010f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3010f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3010fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3010fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301100: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x301100u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x301104: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x301104u;
    {
        const bool branch_taken_0x301104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x301108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301104u;
        // 0x301108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301104) {
            ctx->pc = 0x301188u;
            goto label_301188;
        }
    }
    ctx->pc = 0x30110Cu;
    // 0x30110c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301110: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x301110u;
    {
        const bool branch_taken_0x301110 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x301110) {
            ctx->pc = 0x301168u;
            goto label_301168;
        }
    }
    ctx->pc = 0x301118u;
    // 0x301118: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x301118u;
    {
        const bool branch_taken_0x301118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x301118) {
            ctx->pc = 0x301128u;
            goto label_301128;
        }
    }
    ctx->pc = 0x301120u;
    // 0x301120: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x301120u;
    {
        const bool branch_taken_0x301120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301120) {
            ctx->pc = 0x3012C0u;
            goto label_3012c0;
        }
    }
    ctx->pc = 0x301128u;
label_301128:
    // 0x301128: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x301128u;
    {
        const bool branch_taken_0x301128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x301128) {
            ctx->pc = 0x301150u;
            goto label_301150;
        }
    }
    ctx->pc = 0x301130u;
    // 0x301130: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x301130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x301134: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x301134u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x301138: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x301138u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x30113c: 0xc0aad80  jal         func_2AB600
    ctx->pc = 0x30113Cu;
    SET_GPR_U32(ctx, 31, 0x301144u);
    ctx->pc = 0x301140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30113Cu;
    // 0x301140: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB600u, 0x30113Cu, 0x301144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301144u;
label_301144:
    // 0x301144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301144u;
    {
        const bool branch_taken_0x301144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301144u;
        // 0x301148: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301144) {
            ctx->pc = 0x301158u;
            goto label_301158;
        }
    }
    ctx->pc = 0x30114Cu;
    // 0x30114c: 0x0  nop
    ctx->pc = 0x30114cu;
    // NOP
label_301150:
    // 0x301150: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x301150u;
    SET_GPR_U32(ctx, 31, 0x301158u);
    ctx->pc = 0x301154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301150u;
    // 0x301154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x301150u, 0x301158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301158u;
label_301158:
    // 0x301158: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x301158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x30115c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x301160: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x301160u;
    {
        const bool branch_taken_0x301160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301160u;
        // 0x301164: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301160) {
            ctx->pc = 0x3012C0u;
            goto label_3012c0;
        }
    }
    ctx->pc = 0x301168u;
label_301168:
    // 0x301168: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x301168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x30116c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x30116cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x301170: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x301170u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x301174: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x301174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x301178: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x301178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x30117c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x30117cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x301180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301184: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x301184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_301188:
    // 0x301188: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x301188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x30118c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301190: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x301190u;
    SET_GPR_U32(ctx, 31, 0x301198u);
    ctx->pc = 0x301194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301190u;
    // 0x301194: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x301190u, 0x301198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301198u;
label_301198:
    // 0x301198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301198u;
    {
        const bool branch_taken_0x301198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301198u;
        // 0x30119c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301198) {
            ctx->pc = 0x3011A8u;
            goto label_3011a8;
        }
    }
    ctx->pc = 0x3011A0u;
    // 0x3011a0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3011A0u;
    SET_GPR_U32(ctx, 31, 0x3011A8u);
    ctx->pc = 0x3011A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3011A0u;
    // 0x3011a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3011A0u, 0x3011A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3011A8u;
label_3011a8:
    // 0x3011a8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3011a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3011ac: 0x28830013  slti        $v1, $a0, 0x13
    ctx->pc = 0x3011acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x3011b0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3011B0u;
    {
        const bool branch_taken_0x3011b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3011B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011B0u;
        // 0x3011b4: 0x28810083  slti        $at, $a0, 0x83 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)131) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011b0) {
            ctx->pc = 0x301218u;
            goto label_301218;
        }
    }
    ctx->pc = 0x3011B8u;
    // 0x3011b8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x3011B8u;
    {
        const bool branch_taken_0x3011b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3011b8) {
            ctx->pc = 0x301218u;
            goto label_301218;
        }
    }
    ctx->pc = 0x3011C0u;
    // 0x3011c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3011c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3011c4: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3011c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3011c8: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3011c8u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3011cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3011ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3011d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3011d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3011d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3011d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3011d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3011d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3011dc: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3011dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3011e0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3011e0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3011e4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3011e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3011e8: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3011e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3011ec: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3011ecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3011f0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3011f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3011f4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3011f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3011f8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3011f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3011fc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3011fcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x301200: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x301200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x301204: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x301204u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x301208: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x301208u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x30120c: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x30120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301210: 0xc0c0900  jal         func_302400
    ctx->pc = 0x301210u;
    SET_GPR_U32(ctx, 31, 0x301218u);
    ctx->pc = 0x301214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301210u;
    // 0x301214: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x301210u, 0x301218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301218u;
label_301218:
    // 0x301218: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x301218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x30121c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30121Cu;
    {
        const bool branch_taken_0x30121c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30121Cu;
        // 0x301220: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30121c) {
            ctx->pc = 0x301230u;
            goto label_301230;
        }
    }
    ctx->pc = 0x301224u;
    // 0x301224: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x301224u;
    {
        const bool branch_taken_0x301224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301224) {
            ctx->pc = 0x3012B0u;
            goto label_3012b0;
        }
    }
    ctx->pc = 0x30122Cu;
    // 0x30122c: 0x0  nop
    ctx->pc = 0x30122cu;
    // NOP
label_301230:
    // 0x301230: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x301230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x301234: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x301234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x301238: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x301238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30123c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x30123cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x301240: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x301240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x301244: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x301244u;
    {
        const bool branch_taken_0x301244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x301244) {
            ctx->pc = 0x301280u;
            goto label_301280;
        }
    }
    ctx->pc = 0x30124Cu;
    // 0x30124c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x30124cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x301250: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x301250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x301254: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x301254u;
    {
        const bool branch_taken_0x301254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301254u;
        // 0x301258: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301254) {
            ctx->pc = 0x3012A8u;
            goto label_3012a8;
        }
    }
    ctx->pc = 0x30125Cu;
    // 0x30125c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301260: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x301260u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x301264: 0x0  nop
    ctx->pc = 0x301264u;
    // NOP
    // 0x301268: 0x0  nop
    ctx->pc = 0x301268u;
    // NOP
    // 0x30126c: 0x2010  mfhi        $a0
    ctx->pc = 0x30126cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x301270: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x301270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x301274: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x301274u;
    {
        const bool branch_taken_0x301274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301274u;
        // 0x301278: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301274) {
            ctx->pc = 0x3012A8u;
            goto label_3012a8;
        }
    }
    ctx->pc = 0x30127Cu;
    // 0x30127c: 0x0  nop
    ctx->pc = 0x30127cu;
    // NOP
label_301280:
    // 0x301280: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x301280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x301284: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x301284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x301288: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x301288u;
    {
        const bool branch_taken_0x301288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301288) {
            ctx->pc = 0x3012A8u;
            goto label_3012a8;
        }
    }
    ctx->pc = 0x301290u;
    // 0x301290: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x301290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x301294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301298: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x301298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30129c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30129Cu;
    {
        const bool branch_taken_0x30129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3012A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30129Cu;
        // 0x3012a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30129c) {
            ctx->pc = 0x3012B0u;
            goto label_3012b0;
        }
    }
    ctx->pc = 0x3012A4u;
    // 0x3012a4: 0x0  nop
    ctx->pc = 0x3012a4u;
    // NOP
label_3012a8:
    // 0x3012a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3012a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3012ac: 0x0  nop
    ctx->pc = 0x3012acu;
    // NOP
label_3012b0:
    // 0x3012b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3012B0u;
    {
        const bool branch_taken_0x3012b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3012B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012B0u;
        // 0x3012b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012b0) {
            ctx->pc = 0x3012C0u;
            goto label_3012c0;
        }
    }
    ctx->pc = 0x3012B8u;
    // 0x3012b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3012B8u;
    SET_GPR_U32(ctx, 31, 0x3012C0u);
    ctx->pc = 0x3012BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3012B8u;
    // 0x3012bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3012B8u, 0x3012C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3012C0u;
label_3012c0:
    // 0x3012c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3012c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3012c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3012c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3012c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3012C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3012CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012C8u;
        // 0x3012cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3012C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3012D0u;
}
