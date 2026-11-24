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

// Function: sub_0018F540
// Address: 0x18f540 - 0x18f654
void sub_0018F540_0x18f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F540_0x18f540");
#endif

    switch (ctx->pc) {
        case 0x18f648u: goto label_18f648;
        default: break;
    }

    ctx->pc = 0x18f540u;

    // 0x18f540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f548: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x18f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x18f54c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F54Cu;
    {
        const bool branch_taken_0x18f54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F54Cu;
        // 0x18f550: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f54c) {
            ctx->pc = 0x18F560u;
            goto label_18f560;
        }
    }
    ctx->pc = 0x18F554u;
    // 0x18f554: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18F554u;
    {
        const bool branch_taken_0x18f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f554) {
            ctx->pc = 0x18F608u;
            goto label_18f608;
        }
    }
    ctx->pc = 0x18F55Cu;
    // 0x18f55c: 0x0  nop
    ctx->pc = 0x18f55cu;
    // NOP
label_18f560:
    // 0x18f560: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x18f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18f564: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F564u;
    {
        const bool branch_taken_0x18f564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f564) {
            ctx->pc = 0x18F580u;
            goto label_18f580;
        }
    }
    ctx->pc = 0x18F56Cu;
    // 0x18f56c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x18f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x18f570: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F570u;
    {
        const bool branch_taken_0x18f570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f570) {
            ctx->pc = 0x18F580u;
            goto label_18f580;
        }
    }
    ctx->pc = 0x18F578u;
    // 0x18f578: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18f57c: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x18f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
label_18f580:
    // 0x18f580: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x18f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x18f584: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F584u;
    {
        const bool branch_taken_0x18f584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f584) {
            ctx->pc = 0x18F5C8u;
            goto label_18f5c8;
        }
    }
    ctx->pc = 0x18F58Cu;
    // 0x18f58c: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x18f58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x18f590: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F590u;
    {
        const bool branch_taken_0x18f590 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F590u;
        // 0x18f594: 0x64070080  daddiu      $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f590) {
            ctx->pc = 0x18F5A0u;
            goto label_18f5a0;
        }
    }
    ctx->pc = 0x18F598u;
    // 0x18f598: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18F598u;
    {
        const bool branch_taken_0x18f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f598) {
            ctx->pc = 0x18F600u;
            goto label_18f600;
        }
    }
    ctx->pc = 0x18F5A0u;
label_18f5a0:
    // 0x18f5a0: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x18f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x18f5a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18f5a8: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x18f5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x18f5ac: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x18f5acu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18f5b0: 0x0  nop
    ctx->pc = 0x18f5b0u;
    // NOP
    // 0x18f5b4: 0x0  nop
    ctx->pc = 0x18f5b4u;
    // NOP
    // 0x18f5b8: 0x2812  mflo        $a1
    ctx->pc = 0x18f5b8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x18f5bc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18f5c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18F5C0u;
    {
        const bool branch_taken_0x18f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5C0u;
        // 0x18f5c4: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5c0) {
            ctx->pc = 0x18F600u;
            goto label_18f600;
        }
    }
    ctx->pc = 0x18F5C8u;
label_18f5c8:
    // 0x18f5c8: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x18f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x18f5cc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F5CCu;
    {
        const bool branch_taken_0x18f5cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5CCu;
        // 0x18f5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5cc) {
            ctx->pc = 0x18F5E0u;
            goto label_18f5e0;
        }
    }
    ctx->pc = 0x18F5D4u;
    // 0x18f5d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18F5D4u;
    {
        const bool branch_taken_0x18f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5d4) {
            ctx->pc = 0x18F600u;
            goto label_18f600;
        }
    }
    ctx->pc = 0x18F5DCu;
    // 0x18f5dc: 0x0  nop
    ctx->pc = 0x18f5dcu;
    // NOP
label_18f5e0:
    // 0x18f5e0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x18f5e4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x18f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x18f5e8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x18f5e8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18f5ec: 0x0  nop
    ctx->pc = 0x18f5ecu;
    // NOP
    // 0x18f5f0: 0x0  nop
    ctx->pc = 0x18f5f0u;
    // NOP
    // 0x18f5f4: 0x1812  mflo        $v1
    ctx->pc = 0x18f5f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x18f5f8: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x18f5f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18f5fc: 0x0  nop
    ctx->pc = 0x18f5fcu;
    // NOP
label_18f600:
    // 0x18f600: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x18F600u;
    {
        const bool branch_taken_0x18f600 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f600) {
            ctx->pc = 0x18F648u;
            goto label_18f648;
        }
    }
    ctx->pc = 0x18F608u;
label_18f608:
    // 0x18f608: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18f608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18f60c: 0x9025cea4  lbu         $a1, -0x315C($at)
    ctx->pc = 0x18f60cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x18f610: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18f610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x18f614: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x18f614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x18f618: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18f618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18f61c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x18f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18f620: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x18f620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x18f624: 0xa0a7000f  sb          $a3, 0xF($a1)
    ctx->pc = 0x18f624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 7));
    // 0x18f628: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x18f628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18f62c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18f62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18f630: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F630u;
    {
        const bool branch_taken_0x18f630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f630) {
            ctx->pc = 0x18F648u;
            goto label_18f648;
        }
    }
    ctx->pc = 0x18F638u;
    // 0x18f638: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x18f638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x18f63c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x18f63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18f640: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x18F640u;
    SET_GPR_U32(ctx, 31, 0x18F648u);
    ctx->pc = 0x18F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F640u;
    // 0x18f644: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x18F640u, 0x18F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F648u;
label_18f648:
    // 0x18f648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F64Cu;
        // 0x18f650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F654u;
}
