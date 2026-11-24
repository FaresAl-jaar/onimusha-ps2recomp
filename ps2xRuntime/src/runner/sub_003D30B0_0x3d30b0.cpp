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

// Function: sub_003D30B0
// Address: 0x3d30b0 - 0x3d3388
void sub_003D30B0_0x3d30b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D30B0_0x3d30b0");
#endif

    switch (ctx->pc) {
        case 0x3d3100u: goto label_3d3100;
        case 0x3d3138u: goto label_3d3138;
        case 0x3d3148u: goto label_3d3148;
        case 0x3d3188u: goto label_3d3188;
        case 0x3d319cu: goto label_3d319c;
        case 0x3d31b8u: goto label_3d31b8;
        case 0x3d31e8u: goto label_3d31e8;
        case 0x3d31f8u: goto label_3d31f8;
        case 0x3d3208u: goto label_3d3208;
        case 0x3d3274u: goto label_3d3274;
        case 0x3d32a8u: goto label_3d32a8;
        case 0x3d32c0u: goto label_3d32c0;
        case 0x3d3378u: goto label_3d3378;
        default: break;
    }

    ctx->pc = 0x3d30b0u;

    // 0x3d30b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d30b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3d30b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d30b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d30b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d30bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d30bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d30c0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3d30c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3d30c4: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D30C4u;
    {
        const bool branch_taken_0x3d30c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30C4u;
        // 0x3d30c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d30c4) {
            ctx->pc = 0x3D3178u;
            goto label_3d3178;
        }
    }
    ctx->pc = 0x3D30CCu;
    // 0x3d30cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d30d0: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D30D0u;
    {
        const bool branch_taken_0x3d30d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d30d0) {
            ctx->pc = 0x3D3158u;
            goto label_3d3158;
        }
    }
    ctx->pc = 0x3D30D8u;
    // 0x3d30d8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D30D8u;
    {
        const bool branch_taken_0x3d30d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d30d8) {
            ctx->pc = 0x3D30E8u;
            goto label_3d30e8;
        }
    }
    ctx->pc = 0x3D30E0u;
    // 0x3d30e0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x3D30E0u;
    {
        const bool branch_taken_0x3d30e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d30e0) {
            ctx->pc = 0x3D3378u;
            goto label_3d3378;
        }
    }
    ctx->pc = 0x3D30E8u;
label_3d30e8:
    // 0x3d30e8: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D30E8u;
    {
        const bool branch_taken_0x3d30e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d30e8) {
            ctx->pc = 0x3D3140u;
            goto label_3d3140;
        }
    }
    ctx->pc = 0x3D30F0u;
    // 0x3d30f0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3d30f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3d30f4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3d30f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d30f8: 0xc0aac68  jal         func_2AB1A0
    ctx->pc = 0x3D30F8u;
    SET_GPR_U32(ctx, 31, 0x3D3100u);
    ctx->pc = 0x3D30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D30F8u;
    // 0x3d30fc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB1A0u, 0x3D30F8u, 0x3D3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3100u;
label_3d3100:
    // 0x3d3100: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x3d3100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x3d3104: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d3104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d3108: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3d3108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d310c: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x3d310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x3d3110: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d3110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d3114: 0x34454a02  ori         $a1, $v0, 0x4A02
    ctx->pc = 0x3d3114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18946);
    // 0x3d3118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d311c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3d311cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d3120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d3120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3124: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d3124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3128: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d3128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d312c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d312cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3130: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D3130u;
    SET_GPR_U32(ctx, 31, 0x3D3138u);
    ctx->pc = 0x3D3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3130u;
    // 0x3d3134: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D3130u, 0x3D3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3138u;
label_3d3138:
    // 0x3d3138: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3138u;
    {
        const bool branch_taken_0x3d3138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3138) {
            ctx->pc = 0x3D3148u;
            goto label_3d3148;
        }
    }
    ctx->pc = 0x3D3140u;
label_3d3140:
    // 0x3d3140: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3140u;
    SET_GPR_U32(ctx, 31, 0x3D3148u);
    ctx->pc = 0x3D3144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3140u;
    // 0x3d3144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3140u, 0x3D3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3148u;
label_3d3148:
    // 0x3d3148: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3d3148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3d314c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d3150: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x3D3150u;
    {
        const bool branch_taken_0x3d3150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3150u;
        // 0x3d3154: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3150) {
            ctx->pc = 0x3D3378u;
            goto label_3d3378;
        }
    }
    ctx->pc = 0x3D3158u;
label_3d3158:
    // 0x3d3158: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3d3158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3d315c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3d315cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d3160: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3d3160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d3164: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3d3164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3168: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3d3168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d316c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3d316cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3d3170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d3170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d3174: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3d3174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d3178:
    // 0x3d3178: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3d3178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d317c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3180: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x3D3180u;
    SET_GPR_U32(ctx, 31, 0x3D3188u);
    ctx->pc = 0x3D3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3180u;
    // 0x3d3184: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3D3180u, 0x3D3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3188u;
label_3d3188:
    // 0x3d3188: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d3188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d318c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3d318cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d3190: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d3190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d3194: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3D3194u;
    SET_GPR_U32(ctx, 31, 0x3D319Cu);
    ctx->pc = 0x3D3198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3194u;
    // 0x3d3198: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3D3194u, 0x3D319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D319Cu;
label_3d319c:
    // 0x3d319c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x3d319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x3d31a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3d31a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3d31a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3d31a8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3d31a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d31ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d31acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d31b0: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x3D31B0u;
    SET_GPR_U32(ctx, 31, 0x3D31B8u);
    ctx->pc = 0x3D31B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31B0u;
    // 0x3d31b4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x3D31B0u, 0x3D31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31B8u;
label_3d31b8:
    // 0x3d31b8: 0xe6000564  swc1        $f0, 0x564($s0)
    ctx->pc = 0x3d31b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x3d31bc: 0x9202056a  lbu         $v0, 0x56A($s0)
    ctx->pc = 0x3d31bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x3d31c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D31C0u;
    {
        const bool branch_taken_0x3d31c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31C0u;
        // 0x3d31c4: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d31c0) {
            ctx->pc = 0x3D31E8u;
            goto label_3d31e8;
        }
    }
    ctx->pc = 0x3D31C8u;
    // 0x3d31c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d31cc: 0x34638885  ori         $v1, $v1, 0x8885
    ctx->pc = 0x3d31ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34949);
    // 0x3d31d0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3d31d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d31d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d31d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d31d8: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3d31d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d31dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d31dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d31e0: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3D31E0u;
    SET_GPR_U32(ctx, 31, 0x3D31E8u);
    ctx->pc = 0x3D31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31E0u;
    // 0x3d31e4: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3D31E0u, 0x3D31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31E8u;
label_3d31e8:
    // 0x3d31e8: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x3d31e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x3d31ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d31f0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D31F0u;
    SET_GPR_U32(ctx, 31, 0x3D31F8u);
    ctx->pc = 0x3D31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31F0u;
    // 0x3d31f4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D31F0u, 0x3D31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31F8u;
label_3d31f8:
    // 0x3d31f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D31F8u;
    {
        const bool branch_taken_0x3d31f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31F8u;
        // 0x3d31fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d31f8) {
            ctx->pc = 0x3D3208u;
            goto label_3d3208;
        }
    }
    ctx->pc = 0x3D3200u;
    // 0x3d3200: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3200u;
    SET_GPR_U32(ctx, 31, 0x3D3208u);
    ctx->pc = 0x3D3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3200u;
    // 0x3d3204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3200u, 0x3D3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3208u;
label_3d3208:
    // 0x3d3208: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3d3208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d320c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D320Cu;
    {
        const bool branch_taken_0x3d320c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D320Cu;
        // 0x3d3210: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d320c) {
            ctx->pc = 0x3D3278u;
            goto label_3d3278;
        }
    }
    ctx->pc = 0x3D3214u;
    // 0x3d3214: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D3214u;
    {
        const bool branch_taken_0x3d3214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3214) {
            ctx->pc = 0x3D3278u;
            goto label_3d3278;
        }
    }
    ctx->pc = 0x3D321Cu;
    // 0x3d321c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d3220: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3d3220u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d3224: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3d3224u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3d3228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d322c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d3230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d3230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3234: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d3234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d3238: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3d3238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3d323c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3d323cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3d3240: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d3240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d3244: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3d3244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3d3248: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3d3248u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3d324c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d3250: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3d3254: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3d3254u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3d3258: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d3258u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d325c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3d325cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3d3260: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d3260u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d3264: 0x92060568  lbu         $a2, 0x568($s0)
    ctx->pc = 0x3d3264u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x3d3268: 0xc60c0564  lwc1        $f12, 0x564($s0)
    ctx->pc = 0x3d3268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d326c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3D326Cu;
    SET_GPR_U32(ctx, 31, 0x3D3274u);
    ctx->pc = 0x3D3270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D326Cu;
    // 0x3d3270: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3D326Cu, 0x3D3274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3274u;
label_3d3274:
    // 0x3d3274: 0x0  nop
    ctx->pc = 0x3d3274u;
    // NOP
label_3d3278:
    // 0x3d3278: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d3278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3d327c: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x3d327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x3d3280: 0x9203056a  lbu         $v1, 0x56A($s0)
    ctx->pc = 0x3d3280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x3d3284: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D3284u;
    {
        const bool branch_taken_0x3d3284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3284u;
        // 0x3d3288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3284) {
            ctx->pc = 0x3D32D0u;
            goto label_3d32d0;
        }
    }
    ctx->pc = 0x3D328Cu;
    // 0x3d328c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3d328cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d3290: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3d3290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3d3294: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3d3294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d3298: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x3d3298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d329c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3d329cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d32a0: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3D32A0u;
    SET_GPR_U32(ctx, 31, 0x3D32A8u);
    ctx->pc = 0x3D32A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D32A0u;
    // 0x3d32a4: 0x27aa009c  addiu       $t2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3D32A0u, 0x3D32A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D32A8u;
label_3d32a8:
    // 0x3d32a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D32A8u;
    {
        const bool branch_taken_0x3d32a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d32a8) {
            ctx->pc = 0x3D32D0u;
            goto label_3d32d0;
        }
    }
    ctx->pc = 0x3D32B0u;
    // 0x3d32b0: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x3d32b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x3d32b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d32b8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D32B8u;
    SET_GPR_U32(ctx, 31, 0x3D32C0u);
    ctx->pc = 0x3D32BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D32B8u;
    // 0x3d32bc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D32B8u, 0x3D32C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D32C0u;
label_3d32c0:
    // 0x3d32c0: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x3d32c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d32c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d32c8: 0x7e040550  sq          $a0, 0x550($s0)
    ctx->pc = 0x3d32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 4));
    // 0x3d32cc: 0xa203056a  sb          $v1, 0x56A($s0)
    ctx->pc = 0x3d32ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1386), (uint8_t)GPR_U32(ctx, 3));
label_3d32d0:
    // 0x3d32d0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3d32d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3d32d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D32D4u;
    {
        const bool branch_taken_0x3d32d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32D4u;
        // 0x3d32d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32d4) {
            ctx->pc = 0x3D32E8u;
            goto label_3d32e8;
        }
    }
    ctx->pc = 0x3D32DCu;
    // 0x3d32dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D32DCu;
    {
        const bool branch_taken_0x3d32dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d32dc) {
            ctx->pc = 0x3D3368u;
            goto label_3d3368;
        }
    }
    ctx->pc = 0x3D32E4u;
    // 0x3d32e4: 0x0  nop
    ctx->pc = 0x3d32e4u;
    // NOP
label_3d32e8:
    // 0x3d32e8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3d32e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d32ec: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d32ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d32f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d32f4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d32f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d32f8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3d32f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3d32fc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D32FCu;
    {
        const bool branch_taken_0x3d32fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d32fc) {
            ctx->pc = 0x3D3338u;
            goto label_3d3338;
        }
    }
    ctx->pc = 0x3D3304u;
    // 0x3d3304: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3d3304u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d3308: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d3308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d330c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D330Cu;
    {
        const bool branch_taken_0x3d330c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D330Cu;
        // 0x3d3310: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d330c) {
            ctx->pc = 0x3D3360u;
            goto label_3d3360;
        }
    }
    ctx->pc = 0x3D3314u;
    // 0x3d3314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3318: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d3318u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d331c: 0x0  nop
    ctx->pc = 0x3d331cu;
    // NOP
    // 0x3d3320: 0x0  nop
    ctx->pc = 0x3d3320u;
    // NOP
    // 0x3d3324: 0x2010  mfhi        $a0
    ctx->pc = 0x3d3324u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d3328: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d3328u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d332c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D332Cu;
    {
        const bool branch_taken_0x3d332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D332Cu;
        // 0x3d3330: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d332c) {
            ctx->pc = 0x3D3360u;
            goto label_3d3360;
        }
    }
    ctx->pc = 0x3D3334u;
    // 0x3d3334: 0x0  nop
    ctx->pc = 0x3d3334u;
    // NOP
label_3d3338:
    // 0x3d3338: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3d3338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d333c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d333cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d3340: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3340u;
    {
        const bool branch_taken_0x3d3340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3340) {
            ctx->pc = 0x3D3360u;
            goto label_3d3360;
        }
    }
    ctx->pc = 0x3D3348u;
    // 0x3d3348: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d3348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d334c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3350: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3d3350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d3354: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3354u;
    {
        const bool branch_taken_0x3d3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3354u;
        // 0x3d3358: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3354) {
            ctx->pc = 0x3D3368u;
            goto label_3d3368;
        }
    }
    ctx->pc = 0x3D335Cu;
    // 0x3d335c: 0x0  nop
    ctx->pc = 0x3d335cu;
    // NOP
label_3d3360:
    // 0x3d3360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3364: 0x0  nop
    ctx->pc = 0x3d3364u;
    // NOP
label_3d3368:
    // 0x3d3368: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3368u;
    {
        const bool branch_taken_0x3d3368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3368u;
        // 0x3d336c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3368) {
            ctx->pc = 0x3D3378u;
            goto label_3d3378;
        }
    }
    ctx->pc = 0x3D3370u;
    // 0x3d3370: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3370u;
    SET_GPR_U32(ctx, 31, 0x3D3378u);
    ctx->pc = 0x3D3374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3370u;
    // 0x3d3374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3370u, 0x3D3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3378u;
label_3d3378:
    // 0x3d3378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d3378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d337c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d337cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d3380: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3380u;
        // 0x3d3384: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3388u;
}
