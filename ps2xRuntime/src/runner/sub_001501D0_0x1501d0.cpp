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

// Function: sub_001501D0
// Address: 0x1501d0 - 0x150284
void sub_001501D0_0x1501d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001501D0_0x1501d0");
#endif

    switch (ctx->pc) {
        case 0x15022cu: goto label_15022c;
        case 0x150244u: goto label_150244;
        case 0x150274u: goto label_150274;
        default: break;
    }

    ctx->pc = 0x1501d0u;

    // 0x1501d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1501d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1501d4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1501d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1501d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1501d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1501dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1501dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1501e0: 0x90246ac0  lbu         $a0, 0x6AC0($at)
    ctx->pc = 0x1501e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x7E6AC0u));
    // 0x1501e4: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1501E4u;
    {
        const bool branch_taken_0x1501e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1501E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501E4u;
        // 0x1501e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501e4) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x1501ECu;
    // 0x1501ec: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1501ECu;
    {
        const bool branch_taken_0x1501ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1501ec) {
            ctx->pc = 0x150238u;
            goto label_150238;
        }
    }
    ctx->pc = 0x1501F4u;
    // 0x1501f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1501F4u;
    {
        const bool branch_taken_0x1501f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501f4) {
            ctx->pc = 0x150208u;
            goto label_150208;
        }
    }
    ctx->pc = 0x1501FCu;
    // 0x1501fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1501FCu;
    {
        const bool branch_taken_0x1501fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501fc) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x150204u;
    // 0x150204: 0x0  nop
    ctx->pc = 0x150204u;
    // NOP
label_150208:
    // 0x150208: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x150208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15020c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15020cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150210: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x150214: 0xa0226ac0  sb          $v0, 0x6AC0($at)
    ctx->pc = 0x150214u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x150218: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x150218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x15021c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x15021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x150220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150224: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x150224u;
    SET_GPR_U32(ctx, 31, 0x15022Cu);
    ctx->pc = 0x150228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150224u;
    // 0x150228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x150224u, 0x15022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15022Cu;
label_15022c:
    // 0x15022c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15022Cu;
    {
        const bool branch_taken_0x15022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15022c) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x150234u;
    // 0x150234: 0x0  nop
    ctx->pc = 0x150234u;
    // NOP
label_150238:
    // 0x150238: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x150238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x15023c: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x15023Cu;
    SET_GPR_U32(ctx, 31, 0x150244u);
    ctx->pc = 0x150240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15023Cu;
    // 0x150240: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x15023Cu, 0x150244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150244u;
label_150244:
    // 0x150244: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x150244u;
    {
        const bool branch_taken_0x150244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150244u;
        // 0x150248: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150244) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x15024Cu;
    // 0x15024c: 0x90236ac0  lbu         $v1, 0x6AC0($at)
    ctx->pc = 0x15024cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27328)));
    // 0x150250: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x150250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150254: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150258: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x150258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x15025c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15025cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150260: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x150260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x150264: 0xa0236ac0  sb          $v1, 0x6AC0($at)
    ctx->pc = 0x150264u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x150268: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x150268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15026c: 0xc0d9330  jal         func_364CC0
    ctx->pc = 0x15026Cu;
    SET_GPR_U32(ctx, 31, 0x150274u);
    ctx->pc = 0x150270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15026Cu;
    // 0x150270: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364CC0u, 0x15026Cu, 0x150274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150274u;
label_150274:
    // 0x150274: 0x0  nop
    ctx->pc = 0x150274u;
    // NOP
label_150278:
    // 0x150278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15027c: 0x3e00008  jr          $ra
    ctx->pc = 0x15027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15027Cu;
        // 0x150280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150284u;
}
