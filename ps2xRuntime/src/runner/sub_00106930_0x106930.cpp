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

// Function: sub_00106930
// Address: 0x106930 - 0x106db8
void sub_00106930_0x106930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106930_0x106930");
#endif

    ctx->pc = 0x106930u;

    // 0x106930: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x106930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x106934: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x106934u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106938: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x106938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10693c: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x10693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x106940: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x106940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x106944: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106948: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x106948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10694c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x10694cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106950: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x106950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x106954: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x106954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106958: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x106958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10695c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x10695cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106960: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x106960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x106964: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x106964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106968: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x106968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10696c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x106970: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x106970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x106974: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x106974u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x106978: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x106978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x10697c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x10697cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x106980: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x106980u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x106984: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x106984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x106988: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x106988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x10698c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x10698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x106990: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x106990u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x106994: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x106994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x106998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10699c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x10699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1069a0: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x1069a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x1069a4: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x1069a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1069a8: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x1069a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1069ac: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1069acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1069b0: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x1069b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1069b4: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x1069b4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1069b8: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x1069b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1069bc: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x1069bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1069c0: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x1069c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x1069c4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x1069c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1069c8: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x1069c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1069cc: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x1069CCu;
    {
        const bool branch_taken_0x1069cc = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069CCu;
        // 0x1069d0: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069cc) {
            ctx->pc = 0x1069E4u;
            goto label_1069e4;
        }
    }
    ctx->pc = 0x1069D4u;
    // 0x1069d4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x1069d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1069d8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1069d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1069dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1069DCu;
    {
        const bool branch_taken_0x1069dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069DCu;
        // 0x1069e0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069dc) {
            ctx->pc = 0x1069ECu;
            goto label_1069ec;
        }
    }
    ctx->pc = 0x1069E4u;
label_1069e4:
    // 0x1069e4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x1069e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1069e8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1069e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1069ec:
    // 0x1069ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1069ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1069f0: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1069f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1069f4: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x1069f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1069f8: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x1069f8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x1069fc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1069fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106a00: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x106a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106a04: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x106a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106a08: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x106a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x106a0c: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x106a0cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x106a10: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x106a10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x106a14: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x106a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x106a18: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x106a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x106a1c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x106a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a20: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x106a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x106a24: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x106a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x106a28: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x106a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x106a2c: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x106a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x106a30: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x106a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x106a34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x106a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x106a38: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x106a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x106a3c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x106a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x106a40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x106a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106a44: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x106a44u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x106a48: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x106a48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x106a4c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x106a4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x106a50: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x106a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x106a54: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x106a54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x106a58: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x106a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x106a5c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x106a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x106a60: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x106a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x106a64: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x106a64u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x106a68: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x106a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a6c: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x106a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x106a70: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x106a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x106a74: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x106a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x106a78: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x106A78u;
    {
        const bool branch_taken_0x106a78 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A78u;
        // 0x106a7c: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a78) {
            ctx->pc = 0x106AB8u;
            goto label_106ab8;
        }
    }
    ctx->pc = 0x106A80u;
    // 0x106a80: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x106a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x106a84: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x106a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x106a88: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x106a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x106a8c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x106A8Cu;
    {
        const bool branch_taken_0x106a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106a8c) {
            ctx->pc = 0x106A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106A8Cu;
            // 0x106a90: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106AECu;
            goto label_106aec;
        }
    }
    ctx->pc = 0x106A94u;
    // 0x106a94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x106a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106a98: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x106a98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x106a9c: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x106a9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x106aa0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x106aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106aa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106aa8: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x106aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x106aac: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x106aacu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x106ab0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x106AB0u;
    {
        const bool branch_taken_0x106ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AB0u;
        // 0x106ab4: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ab0) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x106AB8u;
label_106ab8:
    // 0x106ab8: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x106ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x106abc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x106abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x106ac0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x106ac4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x106AC4u;
    {
        const bool branch_taken_0x106ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106ac4) {
            ctx->pc = 0x106AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106AC4u;
            // 0x106ac8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106AECu;
            goto label_106aec;
        }
    }
    ctx->pc = 0x106ACCu;
    // 0x106acc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x106accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106ad0: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x106ad0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x106ad4: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x106ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x106ad8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x106ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106adc: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x106adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x106ae0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x106ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x106ae4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106AE4u;
    {
        const bool branch_taken_0x106ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AE4u;
        // 0x106ae8: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ae4) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x106AECu;
label_106aec:
    // 0x106aec: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x106aecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_106af0:
    // 0x106af0: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x106af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x106af4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x106AF4u;
    {
        const bool branch_taken_0x106af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AF4u;
        // 0x106af8: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106af4) {
            ctx->pc = 0x106B38u;
            goto label_106b38;
        }
    }
    ctx->pc = 0x106AFCu;
    // 0x106afc: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x106afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x106b00: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106b04: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x106b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x106b08: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x106b08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x106b0c: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x106b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106b10: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x106b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106b14: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x106b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x106b18: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x106b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x106b1c: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x106b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x106b20: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x106b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106b24: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x106b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x106b28: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x106b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x106b2c: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x106b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x106b30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106B30u;
    {
        const bool branch_taken_0x106b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B30u;
        // 0x106b34: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b30) {
            ctx->pc = 0x106B4Cu;
            goto label_106b4c;
        }
    }
    ctx->pc = 0x106B38u;
label_106b38:
    // 0x106b38: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x106b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b3c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x106b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x106b40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x106b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x106b44: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x106b44u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x106b48: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x106b48u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_106b4c:
    // 0x106b4c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x106b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x106b50: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x106b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x106b54: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x106b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x106b58: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x106b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106b5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106b60: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x106b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x106b64: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x106b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x106b68: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x106b68u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x106b6c: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x106b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x106b70: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x106b70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x106b74: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x106b74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x106b78: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x106b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x106b7c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x106b7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x106b80: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x106b84: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x106b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x106b88: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x106b88u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x106b8c: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x106b8cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x106b90: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x106b90u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x106b94: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x106b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x106b98: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x106b98u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x106b9c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x106b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x106ba0: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x106BA0u;
    {
        const bool branch_taken_0x106ba0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BA0u;
        // 0x106ba4: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ba0) {
            ctx->pc = 0x106BC4u;
            goto label_106bc4;
        }
    }
    ctx->pc = 0x106BA8u;
    // 0x106ba8: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x106ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x106bac: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x106bacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x106bb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x106bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x106bb4: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x106bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x106bb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x106bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x106bbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106BBCu;
    {
        const bool branch_taken_0x106bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BBCu;
        // 0x106bc0: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bbc) {
            ctx->pc = 0x106BD8u;
            goto label_106bd8;
        }
    }
    ctx->pc = 0x106BC4u;
label_106bc4:
    // 0x106bc4: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x106bc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x106bc8: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x106bc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x106bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106bd0: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x106bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x106bd4: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x106bd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_106bd8:
    // 0x106bd8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x106bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106bdc: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x106bdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x106be0: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x106be0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x106be4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x106be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x106be8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x106be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x106bec: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x106becu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x106bf0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x106bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106bf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x106bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x106bf8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x106bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x106bfc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x106bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x106c00: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x106c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x106c04: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x106c04u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x106c08: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x106c08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x106c0c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x106c0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x106c10: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x106c10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x106c14: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x106C14u;
    {
        const bool branch_taken_0x106c14 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C14u;
        // 0x106c18: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c14) {
            ctx->pc = 0x106C54u;
            goto label_106c54;
        }
    }
    ctx->pc = 0x106C1Cu;
    // 0x106c1c: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x106c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x106c20: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x106c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x106c24: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x106c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x106c28: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x106C28u;
    {
        const bool branch_taken_0x106c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106c28) {
            ctx->pc = 0x106C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106C28u;
            // 0x106c2c: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106C88u;
            goto label_106c88;
        }
    }
    ctx->pc = 0x106C30u;
    // 0x106c30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x106c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106c34: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x106c34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x106c38: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x106c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x106c3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x106c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106c40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106c44: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x106c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x106c48: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x106c48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x106c4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x106C4Cu;
    {
        const bool branch_taken_0x106c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C4Cu;
        // 0x106c50: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c4c) {
            ctx->pc = 0x106C8Cu;
            goto label_106c8c;
        }
    }
    ctx->pc = 0x106C54u;
label_106c54:
    // 0x106c54: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x106c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x106c58: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x106c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x106c5c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x106c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x106c60: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x106C60u;
    {
        const bool branch_taken_0x106c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106c60) {
            ctx->pc = 0x106C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106C60u;
            // 0x106c64: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106C88u;
            goto label_106c88;
        }
    }
    ctx->pc = 0x106C68u;
    // 0x106c68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x106c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106c6c: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x106c6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x106c70: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x106c70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x106c74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106c78: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x106c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x106c7c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x106c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x106c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106C80u;
    {
        const bool branch_taken_0x106c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C80u;
        // 0x106c84: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c80) {
            ctx->pc = 0x106C8Cu;
            goto label_106c8c;
        }
    }
    ctx->pc = 0x106C88u;
label_106c88:
    // 0x106c88: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x106c88u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_106c8c:
    // 0x106c8c: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x106c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x106c90: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x106c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x106c94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x106c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x106c98: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x106c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x106c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106ca0: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x106ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x106ca4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x106ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106ca8: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x106CA8u;
    {
        const bool branch_taken_0x106ca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x106CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CA8u;
        // 0x106cac: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ca8) {
            ctx->pc = 0x106CD0u;
            goto label_106cd0;
        }
    }
    ctx->pc = 0x106CB0u;
    // 0x106cb0: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x106cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x106cb4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x106cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x106cb8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x106cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x106cbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x106cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x106cc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x106cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x106cc4: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x106cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x106cc8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x106CC8u;
    {
        const bool branch_taken_0x106cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CC8u;
        // 0x106ccc: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cc8) {
            ctx->pc = 0x106D10u;
            goto label_106d10;
        }
    }
    ctx->pc = 0x106CD0u;
label_106cd0:
    // 0x106cd0: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x106cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x106cd4: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x106cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x106cd8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x106cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x106cdc: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x106cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x106ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106CE0u;
    {
        const bool branch_taken_0x106ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CE0u;
        // 0x106ce4: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ce0) {
            ctx->pc = 0x106CF4u;
            goto label_106cf4;
        }
    }
    ctx->pc = 0x106CE8u;
    // 0x106ce8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106cec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x106CECu;
    {
        const bool branch_taken_0x106cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CECu;
        // 0x106cf0: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cec) {
            ctx->pc = 0x106D00u;
            goto label_106d00;
        }
    }
    ctx->pc = 0x106CF4u;
label_106cf4:
    // 0x106cf4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x106cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x106cf8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x106cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x106cfc: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x106cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_106d00:
    // 0x106d00: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x106d00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x106d04: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x106d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x106d08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x106d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106d0c: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x106d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_106d10:
    // 0x106d10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x106d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106d14: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x106d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x106d18: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x106d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x106d1c: 0x248428d0  addiu       $a0, $a0, 0x28D0
    ctx->pc = 0x106d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10448));
    // 0x106d20: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x106d20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x106d24: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x106d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x106d28: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x106d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x106d2c: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x106d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106d30: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x106d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x106d34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x106d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x106d38: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x106d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106d3c: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x106d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x106d40: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x106d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x106d44: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x106d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x106d48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x106d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x106d4c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x106d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x106d50: 0x244228f0  addiu       $v0, $v0, 0x28F0
    ctx->pc = 0x106d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10480));
    // 0x106d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x106d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x106d58: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x106d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x106d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106d60: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x106d60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106d68: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x106d68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106d6c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x106d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106d70: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x106d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106d74: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x106d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x106d78: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x106d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106d7c: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x106d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x106d80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x106d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106d84: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x106d84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x106d88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x106d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106d90: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x106d90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106d94: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x106d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106d98: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x106d98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106d9c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x106d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106da0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x106da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106da4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x106da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106da8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x106da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x106dac: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x106dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x106db0: 0x3e00008  jr          $ra
    ctx->pc = 0x106DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DB0u;
        // 0x106db4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106DB8u;
}
