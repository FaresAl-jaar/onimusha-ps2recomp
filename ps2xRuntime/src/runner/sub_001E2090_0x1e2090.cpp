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

// Function: sub_001E2090
// Address: 0x1e2090 - 0x1e21b8
void sub_001E2090_0x1e2090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2090_0x1e2090");
#endif

    ctx->pc = 0x1e2090u;

    // 0x1e2090: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1e2090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2094: 0x2c41002a  sltiu       $at, $v0, 0x2A
    ctx->pc = 0x1e2094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x1e2098: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x1E2098u;
    {
        const bool branch_taken_0x1e2098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2098u;
        // 0x1e209c: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2098) {
            ctx->pc = 0x1E21A8u;
            goto label_1e21a8;
        }
    }
    ctx->pc = 0x1E20A0u;
    // 0x1e20a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e20a4: 0x24635ec0  addiu       $v1, $v1, 0x5EC0
    ctx->pc = 0x1e20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
    // 0x1e20a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e20ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e20acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20b0: 0x400008  jr          $v0
    ctx->pc = 0x1E20B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E20B8u: goto label_1e20b8;
            case 0x1E20C0u: goto label_1e20c0;
            case 0x1E20C8u: goto label_1e20c8;
            case 0x1E20D0u: goto label_1e20d0;
            case 0x1E20D8u: goto label_1e20d8;
            case 0x1E20E0u: goto label_1e20e0;
            case 0x1E20E8u: goto label_1e20e8;
            case 0x1E20F0u: goto label_1e20f0;
            case 0x1E20F8u: goto label_1e20f8;
            case 0x1E2100u: goto label_1e2100;
            case 0x1E2108u: goto label_1e2108;
            case 0x1E2110u: goto label_1e2110;
            case 0x1E2118u: goto label_1e2118;
            case 0x1E2120u: goto label_1e2120;
            case 0x1E2128u: goto label_1e2128;
            case 0x1E2130u: goto label_1e2130;
            case 0x1E2138u: goto label_1e2138;
            case 0x1E2140u: goto label_1e2140;
            case 0x1E2148u: goto label_1e2148;
            case 0x1E2150u: goto label_1e2150;
            case 0x1E2158u: goto label_1e2158;
            case 0x1E2160u: goto label_1e2160;
            case 0x1E2168u: goto label_1e2168;
            case 0x1E2170u: goto label_1e2170;
            case 0x1E2178u: goto label_1e2178;
            case 0x1E2180u: goto label_1e2180;
            case 0x1E2188u: goto label_1e2188;
            case 0x1E2190u: goto label_1e2190;
            case 0x1E2198u: goto label_1e2198;
            case 0x1E21A0u: goto label_1e21a0;
            case 0x1E21A8u: goto label_1e21a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E20B8u;
label_1e20b8:
    // 0x1e20b8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1E20B8u;
    {
        const bool branch_taken_0x1e20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20B8u;
        // 0x1e20bc: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20b8) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20C0u;
label_1e20c0:
    // 0x1e20c0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1E20C0u;
    {
        const bool branch_taken_0x1e20c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20C0u;
        // 0x1e20c4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20c0) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20C8u;
label_1e20c8:
    // 0x1e20c8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E20C8u;
    {
        const bool branch_taken_0x1e20c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20C8u;
        // 0x1e20cc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20c8) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20D0u;
label_1e20d0:
    // 0x1e20d0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E20D0u;
    {
        const bool branch_taken_0x1e20d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D0u;
        // 0x1e20d4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20d0) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20D8u;
label_1e20d8:
    // 0x1e20d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E20D8u;
    {
        const bool branch_taken_0x1e20d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D8u;
        // 0x1e20dc: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20d8) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20E0u;
label_1e20e0:
    // 0x1e20e0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E20E0u;
    {
        const bool branch_taken_0x1e20e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20E0u;
        // 0x1e20e4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20e0) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20E8u;
label_1e20e8:
    // 0x1e20e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E20E8u;
    {
        const bool branch_taken_0x1e20e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20E8u;
        // 0x1e20ec: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20e8) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20F0u;
label_1e20f0:
    // 0x1e20f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E20F0u;
    {
        const bool branch_taken_0x1e20f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F0u;
        // 0x1e20f4: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20f0) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E20F8u;
label_1e20f8:
    // 0x1e20f8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1E20F8u;
    {
        const bool branch_taken_0x1e20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F8u;
        // 0x1e20fc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20f8) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2100u;
label_1e2100:
    // 0x1e2100: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E2100u;
    {
        const bool branch_taken_0x1e2100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2100u;
        // 0x1e2104: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2100) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2108u;
label_1e2108:
    // 0x1e2108: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E2108u;
    {
        const bool branch_taken_0x1e2108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2108u;
        // 0x1e210c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2108) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2110u;
label_1e2110:
    // 0x1e2110: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1E2110u;
    {
        const bool branch_taken_0x1e2110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2110u;
        // 0x1e2114: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2110) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2118u;
label_1e2118:
    // 0x1e2118: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E2118u;
    {
        const bool branch_taken_0x1e2118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2118u;
        // 0x1e211c: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2118) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2120u;
label_1e2120:
    // 0x1e2120: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E2120u;
    {
        const bool branch_taken_0x1e2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2120u;
        // 0x1e2124: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2120) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2128u;
label_1e2128:
    // 0x1e2128: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1E2128u;
    {
        const bool branch_taken_0x1e2128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2128u;
        // 0x1e212c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2128) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2130u;
label_1e2130:
    // 0x1e2130: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E2130u;
    {
        const bool branch_taken_0x1e2130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2130u;
        // 0x1e2134: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2130) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2138u;
label_1e2138:
    // 0x1e2138: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E2138u;
    {
        const bool branch_taken_0x1e2138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2138u;
        // 0x1e213c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2138) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2140u;
label_1e2140:
    // 0x1e2140: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E2140u;
    {
        const bool branch_taken_0x1e2140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2140u;
        // 0x1e2144: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2140) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2148u;
label_1e2148:
    // 0x1e2148: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2148u;
    {
        const bool branch_taken_0x1e2148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2148u;
        // 0x1e214c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2148) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2150u;
label_1e2150:
    // 0x1e2150: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E2150u;
    {
        const bool branch_taken_0x1e2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2150u;
        // 0x1e2154: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2150) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2158u;
label_1e2158:
    // 0x1e2158: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E2158u;
    {
        const bool branch_taken_0x1e2158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2158u;
        // 0x1e215c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2158) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2160u;
label_1e2160:
    // 0x1e2160: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E2160u;
    {
        const bool branch_taken_0x1e2160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2160u;
        // 0x1e2164: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2160) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2168u;
label_1e2168:
    // 0x1e2168: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E2168u;
    {
        const bool branch_taken_0x1e2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2168u;
        // 0x1e216c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2168) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2170u;
label_1e2170:
    // 0x1e2170: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E2170u;
    {
        const bool branch_taken_0x1e2170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2170u;
        // 0x1e2174: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2170) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2178u;
label_1e2178:
    // 0x1e2178: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E2178u;
    {
        const bool branch_taken_0x1e2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2178u;
        // 0x1e217c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2178) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2180u;
label_1e2180:
    // 0x1e2180: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E2180u;
    {
        const bool branch_taken_0x1e2180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2180u;
        // 0x1e2184: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2180) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2188u;
label_1e2188:
    // 0x1e2188: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2188u;
    {
        const bool branch_taken_0x1e2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2188u;
        // 0x1e218c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2188) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2190u;
label_1e2190:
    // 0x1e2190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2190u;
    {
        const bool branch_taken_0x1e2190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2190u;
        // 0x1e2194: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2190) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E2198u;
label_1e2198:
    // 0x1e2198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2198u;
    {
        const bool branch_taken_0x1e2198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2198u;
        // 0x1e219c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2198) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E21A0u;
label_1e21a0:
    // 0x1e21a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E21A0u;
    {
        const bool branch_taken_0x1e21a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21A0u;
        // 0x1e21a4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21a0) {
            ctx->pc = 0x1E21B0u;
            goto label_1e21b0;
        }
    }
    ctx->pc = 0x1E21A8u;
label_1e21a8:
    // 0x1e21a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e21a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21ac: 0x0  nop
    ctx->pc = 0x1e21acu;
    // NOP
label_1e21b0:
    // 0x1e21b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E21B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E21B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E21B8u;
}
