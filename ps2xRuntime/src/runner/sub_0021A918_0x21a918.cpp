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

// Function: sub_0021A918
// Address: 0x21a918 - 0x21aa04
void sub_0021A918_0x21a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A918_0x21a918");
#endif

    switch (ctx->pc) {
        case 0x21a950u: goto label_21a950;
        default: break;
    }

    ctx->pc = 0x21a918u;

    // 0x21a918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a928: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21a928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a92c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a930: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a934: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21a938: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21a938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a93c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21a93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21a940: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x21a940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a944: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21a948: 0xc043808  jal         func_10E020
    ctx->pc = 0x21A948u;
    SET_GPR_U32(ctx, 31, 0x21A950u);
    ctx->pc = 0x21A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A948u;
    // 0x21a94c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x21A948u, 0x21A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A950u;
label_21a950:
    // 0x21a950: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x21a950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21a954: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x21a954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21a958: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x21a958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21a95c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21a960: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x21a960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21a964: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x21a968: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21a96c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21a970: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21A970u;
    {
        const bool branch_taken_0x21a970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a970) {
            ctx->pc = 0x21A974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A970u;
            // 0x21a974: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A978u;
            goto label_21a978;
        }
    }
    ctx->pc = 0x21A978u;
label_21a978:
    // 0x21a978: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x21a978u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21a97c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x21a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21a980: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x21a980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x21a984: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x21a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x21a988: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x21a988u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21a98c: 0x3810  mfhi        $a3
    ctx->pc = 0x21a98cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x21a990: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x21a990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21a994: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x21a994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a998: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A998u;
    {
        const bool branch_taken_0x21a998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a998) {
            ctx->pc = 0x21A99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A998u;
            // 0x21a99c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A9C0u;
            goto label_21a9c0;
        }
    }
    ctx->pc = 0x21A9A0u;
    // 0x21a9a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a9a4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x21a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x21a9a8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x21a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21a9ac: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x21a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x21a9b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x21a9b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21A9B4u;
    {
        const bool branch_taken_0x21a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9B4u;
        // 0x21a9b8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9b4) {
            ctx->pc = 0x21A9E0u;
            goto label_21a9e0;
        }
    }
    ctx->pc = 0x21A9BCu;
    // 0x21a9bc: 0x0  nop
    ctx->pc = 0x21a9bcu;
    // NOP
label_21a9c0:
    // 0x21a9c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x21a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a9c4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x21a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21a9c8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x21a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21a9cc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x21a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21a9d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x21a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x21a9d4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x21a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a9d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x21a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x21a9dc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x21a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_21a9e0:
    // 0x21a9e0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x21a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21a9e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a9e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a9ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a9f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21a9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a9f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21a9f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a9f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21a9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a9fc: 0x8043800  j           func_10E000
    ctx->pc = 0x21A9FCu;
    ctx->pc = 0x21AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A9FCu;
    // 0x21aa00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    sub_0010E000_0x10e000(rdram, ctx, runtime); return;
    ctx->pc = 0x21AA04u;
}
