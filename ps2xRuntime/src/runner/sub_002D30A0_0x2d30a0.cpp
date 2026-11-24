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

// Function: sub_002D30A0
// Address: 0x2d30a0 - 0x2d3200
void sub_002D30A0_0x2d30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D30A0_0x2d30a0");
#endif

    switch (ctx->pc) {
        case 0x2d3154u: goto label_2d3154;
        default: break;
    }

    ctx->pc = 0x2d30a0u;

    // 0x2d30a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d30a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d30a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d30a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d30a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d30ac: 0x10c00050  beqz        $a2, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D30ACu;
    {
        const bool branch_taken_0x2d30ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30ACu;
        // 0x2d30b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30ac) {
            ctx->pc = 0x2D31F0u;
            goto label_2d31f0;
        }
    }
    ctx->pc = 0x2D30B4u;
    // 0x2d30b4: 0x8cc329c0  lw          $v1, 0x29C0($a2)
    ctx->pc = 0x2d30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d30b8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D30B8u;
    {
        const bool branch_taken_0x2d30b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30b8) {
            ctx->pc = 0x2D31F0u;
            goto label_2d31f0;
        }
    }
    ctx->pc = 0x2D30C0u;
    // 0x2d30c0: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x2d30c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2d30c4: 0x2403008d  addiu       $v1, $zero, 0x8D
    ctx->pc = 0x2d30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2d30c8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D30C8u;
    {
        const bool branch_taken_0x2d30c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30C8u;
        // 0x2d30cc: 0x2403008c  addiu       $v1, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30c8) {
            ctx->pc = 0x2D30E0u;
            goto label_2d30e0;
        }
    }
    ctx->pc = 0x2D30D0u;
    // 0x2d30d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D30D0u;
    {
        const bool branch_taken_0x2d30d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d30d0) {
            ctx->pc = 0x2D30E0u;
            goto label_2d30e0;
        }
    }
    ctx->pc = 0x2D30D8u;
    // 0x2d30d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D30D8u;
    {
        const bool branch_taken_0x2d30d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30d8) {
            ctx->pc = 0x2D3108u;
            goto label_2d3108;
        }
    }
    ctx->pc = 0x2D30E0u;
label_2d30e0:
    // 0x2d30e0: 0x90c32b24  lbu         $v1, 0x2B24($a2)
    ctx->pc = 0x2d30e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11044)));
    // 0x2d30e4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2d30e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x2d30e8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2d30e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d30ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D30ECu;
    {
        const bool branch_taken_0x2d30ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30ECu;
        // 0x2d30f0: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30ec) {
            ctx->pc = 0x2D3100u;
            goto label_2d3100;
        }
    }
    ctx->pc = 0x2D30F4u;
    // 0x2d30f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D30F4u;
    {
        const bool branch_taken_0x2d30f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30f4) {
            ctx->pc = 0x2D3110u;
            goto label_2d3110;
        }
    }
    ctx->pc = 0x2D30FCu;
    // 0x2d30fc: 0x0  nop
    ctx->pc = 0x2d30fcu;
    // NOP
label_2d3100:
    // 0x2d3100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3100u;
    {
        const bool branch_taken_0x2d3100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3100u;
        // 0x2d3104: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3100) {
            ctx->pc = 0x2D3110u;
            goto label_2d3110;
        }
    }
    ctx->pc = 0x2D3108u;
label_2d3108:
    // 0x2d3108: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d3108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d310c: 0x0  nop
    ctx->pc = 0x2d310cu;
    // NOP
label_2d3110:
    // 0x2d3110: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x2d3110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3114: 0x92040030  lbu         $a0, 0x30($s0)
    ctx->pc = 0x2d3114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d3118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d3118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d311c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D311Cu;
    {
        const bool branch_taken_0x2d311c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d311c) {
            ctx->pc = 0x2D31B0u;
            goto label_2d31b0;
        }
    }
    ctx->pc = 0x2D3124u;
    // 0x2d3124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3128: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3128u;
    {
        const bool branch_taken_0x2d3128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3128) {
            ctx->pc = 0x2D3160u;
            goto label_2d3160;
        }
    }
    ctx->pc = 0x2D3130u;
    // 0x2d3130: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3130u;
    {
        const bool branch_taken_0x2d3130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3130) {
            ctx->pc = 0x2D3140u;
            goto label_2d3140;
        }
    }
    ctx->pc = 0x2D3138u;
    // 0x2d3138: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D3138u;
    {
        const bool branch_taken_0x2d3138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3138) {
            ctx->pc = 0x2D31E0u;
            goto label_2d31e0;
        }
    }
    ctx->pc = 0x2D3140u;
label_2d3140:
    // 0x2d3140: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x2d3140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d3144: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d3144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3148: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2d3148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d314c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D314Cu;
    SET_GPR_U32(ctx, 31, 0x2D3154u);
    ctx->pc = 0x2D3150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D314Cu;
    // 0x2d3150: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D314Cu, 0x2D3154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3154u;
label_2d3154:
    // 0x2d3154: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d3154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d3158: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D3158u;
    {
        const bool branch_taken_0x2d3158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3158u;
        // 0x2d315c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3158) {
            ctx->pc = 0x2D31E0u;
            goto label_2d31e0;
        }
    }
    ctx->pc = 0x2D3160u;
label_2d3160:
    // 0x2d3160: 0x90c32b24  lbu         $v1, 0x2B24($a2)
    ctx->pc = 0x2d3160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11044)));
    // 0x2d3164: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D3164u;
    {
        const bool branch_taken_0x2d3164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3164u;
        // 0x2d3168: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3164) {
            ctx->pc = 0x2D31A0u;
            goto label_2d31a0;
        }
    }
    ctx->pc = 0x2D316Cu;
    // 0x2d316c: 0x8cc529c0  lw          $a1, 0x29C0($a2)
    ctx->pc = 0x2d316cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d3170: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2d3170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d3174: 0x94c42b20  lhu         $a0, 0x2B20($a2)
    ctx->pc = 0x2d3174u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11040)));
    // 0x2d3178: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2d3178u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d317c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3180: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d3180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d3184: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3184u;
    {
        const bool branch_taken_0x2d3184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3184) {
            ctx->pc = 0x2D3194u;
            goto label_2d3194;
        }
    }
    ctx->pc = 0x2D318Cu;
    // 0x2d318c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D318Cu;
    {
        const bool branch_taken_0x2d318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d318c) {
            ctx->pc = 0x2D319Cu;
            goto label_2d319c;
        }
    }
    ctx->pc = 0x2D3194u;
label_2d3194:
    // 0x2d3194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3194u;
    {
        const bool branch_taken_0x2d3194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3194u;
        // 0x2d3198: 0xa31823  subu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3194) {
            ctx->pc = 0x2D31A0u;
            goto label_2d31a0;
        }
    }
    ctx->pc = 0x2D319Cu;
label_2d319c:
    // 0x2d319c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d319cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d31a0:
    // 0x2d31a0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d31a4: 0x94c32b20  lhu         $v1, 0x2B20($a2)
    ctx->pc = 0x2d31a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11040)));
    // 0x2d31a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D31A8u;
    {
        const bool branch_taken_0x2d31a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31A8u;
        // 0x2d31ac: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d31a8) {
            ctx->pc = 0x2D31E0u;
            goto label_2d31e0;
        }
    }
    ctx->pc = 0x2D31B0u;
label_2d31b0:
    // 0x2d31b0: 0x90c32b24  lbu         $v1, 0x2B24($a2)
    ctx->pc = 0x2d31b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11044)));
    // 0x2d31b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D31B4u;
    {
        const bool branch_taken_0x2d31b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d31b4) {
            ctx->pc = 0x2D31C4u;
            goto label_2d31c4;
        }
    }
    ctx->pc = 0x2D31BCu;
    // 0x2d31bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D31BCu;
    {
        const bool branch_taken_0x2d31bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31BCu;
        // 0x2d31c0: 0x94c32b22  lhu         $v1, 0x2B22($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d31bc) {
            ctx->pc = 0x2D31CCu;
            goto label_2d31cc;
        }
    }
    ctx->pc = 0x2D31C4u;
label_2d31c4:
    // 0x2d31c4: 0x8cc329c0  lw          $v1, 0x29C0($a2)
    ctx->pc = 0x2d31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d31c8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2d31c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2d31cc:
    // 0x2d31cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d31ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d31d0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d31d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d31d4: 0x94c32b22  lhu         $v1, 0x2B22($a2)
    ctx->pc = 0x2d31d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11042)));
    // 0x2d31d8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2d31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2d31dc: 0x0  nop
    ctx->pc = 0x2d31dcu;
    // NOP
label_2d31e0:
    // 0x2d31e0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d31e4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2d31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2d31e8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d31ec: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2d31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_2d31f0:
    // 0x2d31f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d31f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d31f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d31f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d31f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31F8u;
        // 0x2d31fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D31F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3200u;
}
