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

// Function: sub_0024DB10
// Address: 0x24db10 - 0x24dbcc
void sub_0024DB10_0x24db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DB10_0x24db10");
#endif

    ctx->pc = 0x24db10u;

    // 0x24db10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24db14: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x24db14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24db1c: 0x5410008  bgez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DB1Cu;
    {
        const bool branch_taken_0x24db1c = (GPR_S64(ctx, 10) >= 0);
        ctx->pc = 0x24DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB1Cu;
        // 0x24db20: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db1c) {
            ctx->pc = 0x24DB40u;
            goto label_24db40;
        }
    }
    ctx->pc = 0x24DB24u;
    // 0x24db24: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24db24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24db28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24db28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24db2c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x24db2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db30: 0x2484e440  addiu       $a0, $a0, -0x1BC0
    ctx->pc = 0x24db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960192));
    // 0x24db34: 0x808d47e  j           func_2351F8
    ctx->pc = 0x24DB34u;
    ctx->pc = 0x24DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB34u;
    // 0x24db38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    sub_002351F8_0x2351f8(rdram, ctx, runtime); return;
    ctx->pc = 0x24DB3Cu;
    // 0x24db3c: 0x0  nop
    ctx->pc = 0x24db3cu;
    // NOP
label_24db40:
    // 0x24db40: 0x5610007  bgez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DB40u;
    {
        const bool branch_taken_0x24db40 = (GPR_S64(ctx, 11) >= 0);
        ctx->pc = 0x24DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB40u;
        // 0x24db44: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db40) {
            ctx->pc = 0x24DB60u;
            goto label_24db60;
        }
    }
    ctx->pc = 0x24DB48u;
    // 0x24db48: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24db48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24db4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24db4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24db50: 0x2484e470  addiu       $a0, $a0, -0x1B90
    ctx->pc = 0x24db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960240));
    // 0x24db54: 0x808d47e  j           func_2351F8
    ctx->pc = 0x24DB54u;
    ctx->pc = 0x24DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB54u;
    // 0x24db58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    sub_002351F8_0x2351f8(rdram, ctx, runtime); return;
    ctx->pc = 0x24DB5Cu;
    // 0x24db5c: 0x0  nop
    ctx->pc = 0x24db5cu;
    // NOP
label_24db60:
    // 0x24db60: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x24db60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x24db64: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x24db64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x24db68: 0x29220021  slti        $v0, $t1, 0x21
    ctx->pc = 0x24db68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x24db6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DB6Cu;
    {
        const bool branch_taken_0x24db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB6Cu;
        // 0x24db70: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db6c) {
            ctx->pc = 0x24DB90u;
            goto label_24db90;
        }
    }
    ctx->pc = 0x24DB74u;
    // 0x24db74: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24db74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24db78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24db78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24db7c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x24db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24db80: 0x2484e4a0  addiu       $a0, $a0, -0x1B60
    ctx->pc = 0x24db80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960288));
    // 0x24db84: 0x808d47e  j           func_2351F8
    ctx->pc = 0x24DB84u;
    ctx->pc = 0x24DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB84u;
    // 0x24db88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    sub_002351F8_0x2351f8(rdram, ctx, runtime); return;
    ctx->pc = 0x24DB8Cu;
    // 0x24db8c: 0x0  nop
    ctx->pc = 0x24db8cu;
    // NOP
label_24db90:
    // 0x24db90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24db90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24db94: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x24db94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x24db98: 0x3c08004d  lui         $t0, 0x4D
    ctx->pc = 0x24db98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)77 << 16));
    // 0x24db9c: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24dba0: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24dba4: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x24dba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x24dba8: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x24dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x24dbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dbb0: 0xac6a74f8  sw          $t2, 0x74F8($v1)
    ctx->pc = 0x24dbb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x4D74F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D74F8u, _value); } while (0);
    // 0x24dbb4: 0xac8b74fc  sw          $t3, 0x74FC($a0)
    ctx->pc = 0x24dbb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x4D74FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D74FCu, _value); } while (0);
    // 0x24dbb8: 0xaca774d4  sw          $a3, 0x74D4($a1)
    ctx->pc = 0x24dbb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x4D74D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D74D4u, _value); } while (0);
    // 0x24dbbc: 0xacc274d8  sw          $v0, 0x74D8($a2)
    ctx->pc = 0x24dbbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4D74D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D74D8u, _value); } while (0);
    // 0x24dbc0: 0xad0974d0  sw          $t1, 0x74D0($t0)
    ctx->pc = 0x24dbc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x4D74D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D74D0u, _value); } while (0);
    // 0x24dbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x24DBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBC4u;
        // 0x24dbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DBCCu;
}
