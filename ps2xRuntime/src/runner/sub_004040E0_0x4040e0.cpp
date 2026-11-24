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

// Function: sub_004040E0
// Address: 0x4040e0 - 0x404128
void sub_004040E0_0x4040e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004040E0_0x4040e0");
#endif

    switch (ctx->pc) {
        case 0x4040e0u: goto label_4040e0;
        case 0x4040e4u: goto label_4040e4;
        case 0x4040e8u: goto label_4040e8;
        case 0x4040ecu: goto label_4040ec;
        case 0x4040f0u: goto label_4040f0;
        case 0x4040f4u: goto label_4040f4;
        case 0x4040f8u: goto label_4040f8;
        case 0x4040fcu: goto label_4040fc;
        case 0x404100u: goto label_404100;
        case 0x404104u: goto label_404104;
        case 0x404108u: goto label_404108;
        case 0x40410cu: goto label_40410c;
        case 0x404110u: goto label_404110;
        case 0x404114u: goto label_404114;
        case 0x404118u: goto label_404118;
        case 0x40411cu: goto label_40411c;
        case 0x404120u: goto label_404120;
        case 0x404124u: goto label_404124;
        default: break;
    }

    ctx->pc = 0x4040e0u;

label_4040e0:
    // 0x4040e0: 0x3c1d0008  lui         $sp, 0x8
    ctx->pc = 0x4040e0u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8 << 16));
label_4040e4:
    // 0x4040e4: 0x60f809  jalr        $v1
label_4040e8:
    if (ctx->pc == 0x4040E8u) {
        ctx->pc = 0x4040E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4040E4u;
        // 0x4040e8: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4040ECu;
        goto label_4040ec;
    }
    ctx->pc = 0x4040E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4040ECu);
        ctx->pc = 0x4040E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4040E4u;
        // 0x4040e8: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4040E4u, 0x4040ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4040ECu;
label_4040ec:
    // 0x4040ec: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x4040ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_4040f0:
    // 0x4040f0: 0xc  syscall     0
    ctx->pc = 0x4040f0u;
    ctx->pc = 0x4040F4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_4040f4:
    // 0x4040f4: 0x0  nop
    ctx->pc = 0x4040f4u;
    // NOP
label_4040f8:
    // 0x4040f8: 0x0  nop
    ctx->pc = 0x4040f8u;
    // NOP
label_4040fc:
    // 0x4040fc: 0x0  nop
    ctx->pc = 0x4040fcu;
    // NOP
label_404100:
    // 0x404100: 0x0  nop
    ctx->pc = 0x404100u;
    // NOP
label_404104:
    // 0x404104: 0x0  nop
    ctx->pc = 0x404104u;
    // NOP
label_404108:
    // 0x404108: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x404108u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_40410c:
    // 0x40410c: 0x1187f0  tge         $zero, $s1, 543
    ctx->pc = 0x40410cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_404110:
    // 0x404110: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x404110u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_404114:
    // 0x404114: 0x80076000  lb          $a3, 0x6000($zero)
    ctx->pc = 0x404114u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6000u));
label_404118:
    // 0x404118: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x404118u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_40411c:
    // 0x40411c: 0x0  nop
    ctx->pc = 0x40411cu;
    // NOP
label_404120:
    // 0x404120: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x404120u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_404124:
    // 0x404124: 0x0  nop
    ctx->pc = 0x404124u;
    // NOP
    ctx->pc = 0x404128u;
}
