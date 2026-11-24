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

// Function: sub_002A22D0
// Address: 0x2a22d0 - 0x2a247c
void sub_002A22D0_0x2a22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A22D0_0x2a22d0");
#endif

    switch (ctx->pc) {
        case 0x2a22f8u: goto label_2a22f8;
        case 0x2a2330u: goto label_2a2330;
        case 0x2a23f0u: goto label_2a23f0;
        case 0x2a2438u: goto label_2a2438;
        case 0x2a2458u: goto label_2a2458;
        default: break;
    }

    ctx->pc = 0x2a22d0u;

    // 0x2a22d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a22d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a22d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a22dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a22dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a22e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a22e4: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2a22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a22e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a22e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22ec: 0x94880068  lhu         $t0, 0x68($a0)
    ctx->pc = 0x2a22ecu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a22f0: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x2a22f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a22f4: 0x0  nop
    ctx->pc = 0x2a22f4u;
    // NOP
label_2a22f8:
    // 0x2a22f8: 0x8d220020  lw          $v0, 0x20($t1)
    ctx->pc = 0x2a22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2a22fc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2a22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a2300: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2A2300u;
    {
        const bool branch_taken_0x2a2300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2300) {
            ctx->pc = 0x2A2418u;
            goto label_2a2418;
        }
    }
    ctx->pc = 0x2A2308u;
    // 0x2a2308: 0x8c46fff8  lw          $a2, -0x8($v0)
    ctx->pc = 0x2a2308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2a230c: 0x10c00042  beqz        $a2, . + 4 + (0x42 << 2)
    ctx->pc = 0x2A230Cu;
    {
        const bool branch_taken_0x2a230c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A230Cu;
        // 0x2a2310: 0x6082b  sltu        $at, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a230c) {
            ctx->pc = 0x2A2418u;
            goto label_2a2418;
        }
    }
    ctx->pc = 0x2A2314u;
    // 0x2a2314: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x2A2314u;
    {
        const bool branch_taken_0x2a2314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2314u;
        // 0x2a2318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2314) {
            ctx->pc = 0x2A2418u;
            goto label_2a2418;
        }
    }
    ctx->pc = 0x2A231Cu;
    // 0x2a231c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x2a231cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a2320: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A2320u;
    {
        const bool branch_taken_0x2a2320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2320u;
        // 0x2a2324: 0x24c4fff8  addiu       $a0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2320) {
            ctx->pc = 0x2A23E0u;
            goto label_2a23e0;
        }
    }
    ctx->pc = 0x2A2328u;
    // 0x2a2328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a232c: 0x0  nop
    ctx->pc = 0x2a232cu;
    // NOP
label_2a2330:
    // 0x2a2330: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a2334: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2a2334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2a2338: 0xa4502b  sltu        $t2, $a1, $a0
    ctx->pc = 0x2a2338u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a233c: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a233cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a2340: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a2340u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a2344: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a2344u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a2348: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x2a2348u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x2a234c: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a234cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a2350: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a2350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a2354: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a2354u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a2358: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a2358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a235c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x2a235cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x2a2360: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a2364: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a2364u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a2368: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a2368u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a236c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a236cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a2370: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x2a2370u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x2a2374: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a2374u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a2378: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a2378u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a237c: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a237cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a2380: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a2380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a2384: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x2a2384u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x2a2388: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a2388u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a238c: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a238cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a2390: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a2390u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a2394: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a2394u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a2398: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x2a2398u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x2a239c: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a239cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a23a0: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a23a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a23a4: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a23a8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a23a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a23ac: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x2a23acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x2a23b0: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a23b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a23b4: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a23b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a23b8: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a23b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a23bc: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a23bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a23c0: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x2a23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x2a23c4: 0x8e0b007c  lw          $t3, 0x7C($s0)
    ctx->pc = 0x2a23c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a23c8: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x2a23c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a23cc: 0x8d6b00e4  lw          $t3, 0xE4($t3)
    ctx->pc = 0x2a23ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 228)));
    // 0x2a23d0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2a23d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a23d4: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x2a23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x2a23d8: 0x1540ffd5  bnez        $t2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2A23D8u;
    {
        const bool branch_taken_0x2a23d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23D8u;
        // 0x2a23dc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23d8) {
            ctx->pc = 0x2A2330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2330;
        }
    }
    ctx->pc = 0x2A23E0u;
label_2a23e0:
    // 0x2a23e0: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x2a23e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a23e4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2A23E4u;
    {
        const bool branch_taken_0x2a23e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23E4u;
        // 0x2a23e8: 0x55080  sll         $t2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23e4) {
            ctx->pc = 0x2A2418u;
            goto label_2a2418;
        }
    }
    ctx->pc = 0x2A23ECu;
    // 0x2a23ec: 0x0  nop
    ctx->pc = 0x2a23ecu;
    // NOP
label_2a23f0:
    // 0x2a23f0: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x2a23f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a23f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a23f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a23f8: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2a23f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a23fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2a23fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a2400: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x2a2400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x2a2404: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2a2404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2a2408: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a2408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a240c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A240Cu;
    {
        const bool branch_taken_0x2a240c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A240Cu;
        // 0x2a2410: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a240c) {
            ctx->pc = 0x2A23F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a23f0;
        }
    }
    ctx->pc = 0x2A2414u;
    // 0x2a2414: 0x0  nop
    ctx->pc = 0x2a2414u;
    // NOP
label_2a2418:
    // 0x2a2418: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a2418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a241c: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2a241cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2a2420: 0x246301f0  addiu       $v1, $v1, 0x1F0
    ctx->pc = 0x2a2420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x2a2424: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2A2424u;
    {
        const bool branch_taken_0x2a2424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2424u;
        // 0x2a2428: 0x25290050  addiu       $t1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2424) {
            ctx->pc = 0x2A22F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a22f8;
        }
    }
    ctx->pc = 0x2A242Cu;
    // 0x2a242c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2430: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x2A2430u;
    SET_GPR_U32(ctx, 31, 0x2A2438u);
    ctx->pc = 0x2A2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2430u;
    // 0x2a2434: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x2A2430u, 0x2A2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2438u;
label_2a2438:
    // 0x2a2438: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a2438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a243c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2440: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x2a2440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x2a2444: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a2444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2448: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a2448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a244c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a2450: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x2A2450u;
    SET_GPR_U32(ctx, 31, 0x2A2458u);
    ctx->pc = 0x2A2454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2450u;
    // 0x2a2454: 0xa022cea4  sb          $v0, -0x315C($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954660), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x2A2450u, 0x2A2458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2458u;
label_2a2458:
    // 0x2a2458: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a2458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a245c: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x2a245cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x2a2460: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a2460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2a2464: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a2464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a2468: 0xa023cea4  sb          $v1, -0x315C($at)
    ctx->pc = 0x2a2468u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEA4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x81CEA4u, _value); } while (0);
    // 0x2a246c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a246cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2474: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2474u;
        // 0x2a2478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A247Cu;
}
