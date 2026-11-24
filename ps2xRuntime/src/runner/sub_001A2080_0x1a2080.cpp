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

// Function: sub_001A2080
// Address: 0x1a2080 - 0x1a2280
void sub_001A2080_0x1a2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2080_0x1a2080");
#endif

    switch (ctx->pc) {
        case 0x1a20b4u: goto label_1a20b4;
        case 0x1a20ccu: goto label_1a20cc;
        case 0x1a20d8u: goto label_1a20d8;
        case 0x1a20e8u: goto label_1a20e8;
        case 0x1a20f8u: goto label_1a20f8;
        case 0x1a2108u: goto label_1a2108;
        case 0x1a2114u: goto label_1a2114;
        case 0x1a2170u: goto label_1a2170;
        case 0x1a2180u: goto label_1a2180;
        case 0x1a2190u: goto label_1a2190;
        case 0x1a21a0u: goto label_1a21a0;
        case 0x1a21acu: goto label_1a21ac;
        case 0x1a21bcu: goto label_1a21bc;
        case 0x1a21c8u: goto label_1a21c8;
        case 0x1a21d8u: goto label_1a21d8;
        default: break;
    }

    ctx->pc = 0x1a2080u;

    // 0x1a2080: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a2084: 0x3c023f7e  lui         $v0, 0x3F7E
    ctx->pc = 0x1a2084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
    // 0x1a2088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a208c: 0x3442353f  ori         $v0, $v0, 0x353F
    ctx->pc = 0x1a208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13631);
    // 0x1a2090: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a2094: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a2098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a209c: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x1a209cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x1a20a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a20a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a20a4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1a20a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1a20a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a20a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a20ac: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A20ACu;
    SET_GPR_U32(ctx, 31, 0x1A20B4u);
    ctx->pc = 0x1A20B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20ACu;
    // 0x1a20b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A20ACu, 0x1A20B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20B4u;
label_1a20b4:
    // 0x1a20b4: 0x3c023f7e  lui         $v0, 0x3F7E
    ctx->pc = 0x1a20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
    // 0x1a20b8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1a20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1a20bc: 0x3442353f  ori         $v0, $v0, 0x353F
    ctx->pc = 0x1a20bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13631);
    // 0x1a20c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a20c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a20c4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A20C4u;
    SET_GPR_U32(ctx, 31, 0x1A20CCu);
    ctx->pc = 0x1A20C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20C4u;
    // 0x1a20c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A20C4u, 0x1A20CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20CCu;
label_1a20cc:
    // 0x1a20cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a20ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20d0: 0xc068708  jal         func_1A1C20
    ctx->pc = 0x1A20D0u;
    SET_GPR_U32(ctx, 31, 0x1A20D8u);
    ctx->pc = 0x1A20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20D0u;
    // 0x1a20d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C20u, 0x1A20D0u, 0x1A20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20D8u;
label_1a20d8:
    // 0x1a20d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a20dc: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x1a20dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1a20e0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A20E0u;
    SET_GPR_U32(ctx, 31, 0x1A20E8u);
    ctx->pc = 0x1A20E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20E0u;
    // 0x1a20e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A20E0u, 0x1A20E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20E8u;
label_1a20e8:
    // 0x1a20e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a20e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a20ec: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1a20ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a20f0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A20F0u;
    SET_GPR_U32(ctx, 31, 0x1A20F8u);
    ctx->pc = 0x1A20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20F0u;
    // 0x1a20f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A20F0u, 0x1A20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20F8u;
label_1a20f8:
    // 0x1a20f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a20f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a20fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a2100: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A2100u;
    SET_GPR_U32(ctx, 31, 0x1A2108u);
    ctx->pc = 0x1A2104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2100u;
    // 0x1a2104: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A2100u, 0x1A2108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2108u;
label_1a2108:
    // 0x1a2108: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a2108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a210c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A210Cu;
    {
        const bool branch_taken_0x1a210c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A210Cu;
        // 0x1a2110: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a210c) {
            ctx->pc = 0x1A2130u;
            goto label_1a2130;
        }
    }
    ctx->pc = 0x1A2114u;
label_1a2114:
    // 0x1a2114: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a2114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2118: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a2118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a211c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2120: 0x0  nop
    ctx->pc = 0x1a2120u;
    // NOP
    // 0x1a2124: 0x0  nop
    ctx->pc = 0x1a2124u;
    // NOP
    // 0x1a2128: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2128u;
    {
        const bool branch_taken_0x1a2128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2128) {
            ctx->pc = 0x1A2114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2114;
        }
    }
    ctx->pc = 0x1A2130u;
label_1a2130:
    // 0x1a2130: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1a2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2134: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a2134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a2138: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1a2138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a213c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2140: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a2140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2144: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1a2144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a2148: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a2148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a214c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a214cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a2150: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1a2150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a2154: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1a2154u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1a2158: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a2158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a215c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1a215cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1a2160: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1a2160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a2164: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1a2164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a2168: 0xc04144e  jal         func_105138
    ctx->pc = 0x1A2168u;
    SET_GPR_U32(ctx, 31, 0x1A2170u);
    ctx->pc = 0x1A216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2168u;
    // 0x1a216c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1A2168u, 0x1A2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2170u;
label_1a2170:
    // 0x1a2170: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a2170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a2174: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1a2174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a2178: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A2178u;
    SET_GPR_U32(ctx, 31, 0x1A2180u);
    ctx->pc = 0x1A217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2178u;
    // 0x1a217c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A2178u, 0x1A2180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2180u;
label_1a2180:
    // 0x1a2180: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a2180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a2184: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x1a2184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a2188: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A2188u;
    SET_GPR_U32(ctx, 31, 0x1A2190u);
    ctx->pc = 0x1A218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2188u;
    // 0x1a218c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A2188u, 0x1A2190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2190u;
label_1a2190:
    // 0x1a2190: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a2190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a2194: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x1a2194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1a2198: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A2198u;
    SET_GPR_U32(ctx, 31, 0x1A21A0u);
    ctx->pc = 0x1A219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2198u;
    // 0x1a219c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A2198u, 0x1A21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21A0u;
label_1a21a0:
    // 0x1a21a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a21a4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1A21A4u;
    SET_GPR_U32(ctx, 31, 0x1A21ACu);
    ctx->pc = 0x1A21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21A4u;
    // 0x1a21a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1A21A4u, 0x1A21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21ACu;
label_1a21ac:
    // 0x1a21ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a21acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a21b0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a21b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a21b4: 0xc041460  jal         func_105180
    ctx->pc = 0x1A21B4u;
    SET_GPR_U32(ctx, 31, 0x1A21BCu);
    ctx->pc = 0x1A21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21B4u;
    // 0x1a21b8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1A21B4u, 0x1A21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21BCu;
label_1a21bc:
    // 0x1a21bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a21c0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1A21C0u;
    SET_GPR_U32(ctx, 31, 0x1A21C8u);
    ctx->pc = 0x1A21C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21C0u;
    // 0x1a21c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1A21C0u, 0x1A21C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21C8u;
label_1a21c8:
    // 0x1a21c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a21cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a21d0: 0xc041460  jal         func_105180
    ctx->pc = 0x1A21D0u;
    SET_GPR_U32(ctx, 31, 0x1A21D8u);
    ctx->pc = 0x1A21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21D0u;
    // 0x1a21d4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1A21D0u, 0x1A21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21D8u;
label_1a21d8:
    // 0x1a21d8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1a21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a21dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a21dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21e0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1a21e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a21e4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1a21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a21e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a21e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a21ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21f0: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x1a21f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a21f4: 0x260c0030  addiu       $t4, $s0, 0x30
    ctx->pc = 0x1a21f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a21f8: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x1a21f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a21fc: 0x260a00c0  addiu       $t2, $s0, 0xC0
    ctx->pc = 0x1a21fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1a2200: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1a2200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a2204: 0x260800d0  addiu       $t0, $s0, 0xD0
    ctx->pc = 0x1a2204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1a2208: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a2208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a220c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a220cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2210: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x1a2210u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x1a2214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a2214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2218: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x1a2218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1a221c: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x1a221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1a2220: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a2220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1a2224: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2228: 0x796d0000  lq          $t5, 0x0($t3)
    ctx->pc = 0x1a2228u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a222c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a222cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a2230: 0x7d8d0000  sq          $t5, 0x0($t4)
    ctx->pc = 0x1a2230u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 13));
    // 0x1a2234: 0x796d0010  lq          $t5, 0x10($t3)
    ctx->pc = 0x1a2234u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1a2238: 0x7d8d0010  sq          $t5, 0x10($t4)
    ctx->pc = 0x1a2238u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 13));
    // 0x1a223c: 0x796d0020  lq          $t5, 0x20($t3)
    ctx->pc = 0x1a223cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x1a2240: 0x7d8d0020  sq          $t5, 0x20($t4)
    ctx->pc = 0x1a2240u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 13));
    // 0x1a2244: 0x796d0030  lq          $t5, 0x30($t3)
    ctx->pc = 0x1a2244u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x1a2248: 0x7d8d0030  sq          $t5, 0x30($t4)
    ctx->pc = 0x1a2248u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 48), GPR_VEC(ctx, 13));
    // 0x1a224c: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x1a224cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a2250: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x1a2250u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x1a2254: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x1a2254u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a2258: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1a2258u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1a225c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1a225cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2260: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1a2260u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1a2264: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a2264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2268: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a2268u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1a226c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2270: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a2274: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a2274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2278: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2278u;
        // 0x1a227c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2280u;
}
